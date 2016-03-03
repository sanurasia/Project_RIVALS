//
//  CLXURLConnection.m
//  WannaChat
//
//  Created by Mohit Singh on 11/09/13.
//  Copyright (c) 2013 Mohit Singh. All rights reserved.
//

#import "CLXURLConnection.h"
#import "AppDelegate.h"
#import "constant.h"

@interface CLXURLConnection ()
{
    NSMutableData *dataResponse;
    
    
}

-(void)refineresult:(__unsafe_unretained NSDictionary*)dict;


@end


@implementation CLXURLConnection



/*
 *  Using for getting the data
 */
- (NSString *)urlencode :(NSString*) str
{
    NSMutableString *output = [NSMutableString string];
    const unsigned char *source = (const unsigned char *)[str UTF8String];
    int sourceLen = strlen((const char *)source);
    for (int i = 0; i < sourceLen; ++i) {
        const unsigned char thisChar = source[i];
        if (thisChar == ' '){
            [output appendString:@"+"];
        } else if (thisChar == '.' || thisChar == '-' || thisChar == '_' || thisChar == '~' ||
                   (thisChar >= 'a' && thisChar <= 'z') ||
                   (thisChar >= 'A' && thisChar <= 'Z') ||
                   (thisChar >= '0' && thisChar <= '9')) {
            [output appendFormat:@"%c", thisChar];
        } else {
            [output appendFormat:@"%%%02X", thisChar];
        }
    }
    return output;
}

-(void)getParseInfoWithUrlPath:( __unsafe_unretained NSString*)urlPath WithSelector:(SEL)selector callerClass:(id)caller parameterDic:( __unsafe_unretained NSMutableDictionary *)parameterDic showloader:(BOOL)showloaders
{
    NSMutableString *prams = [[NSMutableString alloc] init] ;
    NSString *removeLastChar =nil;
    for (id keys in parameterDic) {
        [prams appendFormat:@"%@=%@&",keys,[parameterDic objectForKey:keys]];
    }
    
    NSString *urlString = nil;
    if (parameterDic){
        removeLastChar = [prams substringWithRange:NSMakeRange(0, [prams length]-1)];
        urlString = [NSString stringWithFormat:@"%@?%@",urlPath, removeLastChar];
    }else{
        removeLastChar = [prams substringWithRange:NSMakeRange(0, 0)];
        urlString = [NSString stringWithFormat:@"%@%@",urlPath, removeLastChar];
    }
    
    if ([appDelegate connectedToNetwork])
    {
        NSLog(@"URL string -  %@  ",urlString);
        NSURL *url = [NSURL URLWithString:urlString];
        NSURLRequest* urlRequest = [NSURLRequest requestWithURL:url];
        [NSURLConnection connectionWithRequest:urlRequest delegate:self];
        
    }else
    {
        [appDelegate stopAnimatingIndicatorView];
        [appDelegate showAlertMessage:ALERT_NETWORK tittle:nil];
    }
    
  

}

/*
 *  Using for posting the data
 */

-(void)postParseInfoWithUrlPath:( __unsafe_unretained NSString*)urlPath WithSelector:(SEL)selector callerClass:(id)caller parameterDic:( __unsafe_unretained NSMutableDictionary *)parameterDic showloader:(BOOL)showloaders
{
    NSData *jsonData = nil;
    NSString *jsonString = nil;
    
    if([NSJSONSerialization isValidJSONObject:parameterDic]){
        jsonData = [NSJSONSerialization dataWithJSONObject:parameterDic options:0 error:nil];
        jsonString = [[NSString alloc]initWithData:jsonData encoding:NSUTF8StringEncoding];
       // NSLog(@"post data :- %@", jsonString);
    }
    
    if ([appDelegate connectedToNetwork])
    {
        NSURL *url = [NSURL URLWithString:urlPath];
        NSMutableURLRequest* urlRequest = [NSMutableURLRequest requestWithURL:url cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:60];
        [urlRequest setHTTPMethod:@"POST"];
        [urlRequest addValue: @"application/json; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
        [urlRequest addValue:[NSString stringWithFormat:@"%lu", (unsigned long)[jsonData length]] forHTTPHeaderField:@"Content-Length"];
       
        [urlRequest setHTTPBody:jsonData];
        
       
        [NSURLConnection connectionWithRequest:urlRequest delegate:self];
    }else
    {
        [appDelegate stopAnimatingIndicatorView];
        [appDelegate showAlertMessage:ALERT_NETWORK tittle:nil];
        
    }
    
    
}


#pragma mark - NSURLConnectionDelegate


-(void)connection:(NSURLConnection *)connection didReceiveResponse:(NSURLResponse *)response
{
    dataResponse = [[NSMutableData alloc] init];
    
}

-(void)connection:(NSURLConnection *)connection didReceiveData:(NSData *)data
{
    [dataResponse appendData:data];
    
}

-(void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error
{
   
    NSLog(@" add the errors  %@",error);
    
    [appDelegate stopAnimatingIndicatorView];
    [appDelegate showAlertMessage:ALERT_NETWORK tittle:nil];
    
}

- (void)connectionDidFinishLoading:(NSURLConnection *)connection{
    
    NSString *stringURL = [[[connection originalRequest] URL] absoluteString];
    NSArray *arrays = [stringURL componentsSeparatedByString:@"/"];
       //NSLog(@" ----- print arrays %@",[arrays lastObject]);
    NSArray *functionName = [[arrays lastObject] componentsSeparatedByString:@"?"];
//    NSLog(@" print arrays ----- %@",[functionName objectAtIndex:0]);
    
 //   NSString *stringData = [[NSString alloc] initWithData:dataResponse encoding:NSUTF8StringEncoding];
//    NSLog(@"data String %@",stringData);
    NSError *error = nil;
    id json = [NSJSONSerialization JSONObjectWithData:dataResponse options:NSJSONReadingAllowFragments error:&error];
    if (json==nil)
    {
        NSLog(@"Error: %@",error);
    }
    id objectTyping = nil;
  // NSString* newStr = [[NSString alloc] initWithData:dataResponse encoding:NSUTF8StringEncoding];
    
    if ([NSJSONSerialization isValidJSONObject:json])
    {
        if ([json isKindOfClass:[NSDictionary class]]){
            objectTyping = [[NSDictionary alloc] initWithDictionary:json];
            //[self refineresult:objectTyping];
            
        }else if ([json isKindOfClass:[NSArray class]]){
             objectTyping = [[NSArray alloc] initWithObjects:json, nil];
             [appDelegate showAlertMessage:@"Need Implemented" tittle:nil];
        }
        
        if([self.delegate respondsToSelector:@selector(didReceiveCLXURLResponse:methodName:)]){
            [self.delegate didReceiveCLXURLResponse:objectTyping methodName:[functionName objectAtIndex:0]];
        }

       
        
     }else{
         
    //     [appDelegate showAlertMessage:@"Server Error" tittle:nil];
         [appDelegate stopAnimatingIndicatorView];
     }
    
}

#pragma mark - INSTANCE METHODS

-(void)refineresult:( __unsafe_unretained NSDictionary*)dict
{
     __weak NSData *jsonData = [[dict objectForKey:[[dict allKeys] objectAtIndex:0]] dataUsingEncoding:NSUTF8StringEncoding];
     id json =[NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingMutableLeaves error:nil];
    
    if ([NSJSONSerialization isValidJSONObject:json])
    {
        //IS Valid Json
        if([self.delegate respondsToSelector:@selector(didReceiveCLXURLResponse:)]){
        //     [self.delegate didReceiveCLXURLResponse:json];
        }
        
    }else
    {
        //IS NOT Json
        [appDelegate showAlertMessage:@"JSON is not correct" tittle:nil];
    }
    
}


@end

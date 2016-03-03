//
//  CLXURLConnection.h
//  WannaChat
//
//  Created by Mohit Singh on 11/09/13.
//  Copyright (c) 2013 Mohit Singh. All rights reserved.
//  http://wannachat.cloudapp.net/WannaChat.svc

//http://app.u4uvoice.com/u4uServices.svc

//#define BASEURL @"http://182.71.82.92/EmployeeTracker/ufuservices.svc/" //not working

//#define BASEURL @"http://182.71.82.92/EmployeeTracker/u4uServices.svc/"
#define BASEURL @"http://app.u4uvoice.com/u4uServices.svc/"
                 // http://182.71.82.92/EmployeeTracker/u4uServices.svc
#define BASEURLU4U @"http://u4uvoice.com/?json="
#define KUserSignUp [NSString stringWithFormat:@"%@UserSignUp",BASEURL]
#define KUserLogin  [NSString stringWithFormat:@"%@UserLogin",BASEURL]
#define KUploadFiles [NSString stringWithFormat:@"%@UploadFiles",BASEURL]
#define KForgotPassword [NSString stringWithFormat:@"%@ForgotPassword",BASEURL]
#define KSubmitRequest  [NSString stringWithFormat:@"%@SubmitRequest",BASEURL]
#define KGetLeftMenu    [NSString stringWithFormat:@"%@GetLeftMenu",BASEURL]
#define KU_GetCategories [NSString stringWithFormat:@"%@get_category_index",BASEURLU4U]
#define KU_get_category_posts [NSString stringWithFormat:@"%@get_category_posts",BASEURLU4U]
//#define KGetCategoryPosts  [NSString stringWithFormat:@"%@GetCategoryPosts",BASEURL]

#define KGetCategoryPosts  [NSString stringWithFormat:@"%@GETCATEGORYPOSTS",BASEURL]
#define KGetBazarPosts [NSString stringWithFormat:@"%@GetBazarPosts",BASEURL]
#define KGetPostSearch [NSString stringWithFormat:@"%@GetPostSearch",BASEURL]
#define KGetRelatedPosts  [NSString stringWithFormat:@"%@GetRelatedPosts",BASEURL]

#define KGetResources  [NSString stringWithFormat:@"%@GetResources",BASEURL]
#define KGetLocalBanner [NSString stringWithFormat:@"%@GetLocalBanner",BASEURL]
#define KGetMostViewed  [NSString stringWithFormat:@"%@GetMostViewed",BASEURL]
#define KUpdateDeviceSettings  [NSString stringWithFormat:@"%@UpdateDeviceSettings",BASEURL]
#define KRegisterDevice  [NSString stringWithFormat:@"%@RegisterDevice",BASEURL]
#define KUploadFiles  [NSString stringWithFormat:@"%@UploadFiles",BASEURL]
#define KPostComment   [NSString stringWithFormat:@"%@PostComment",BASEURL]
#define KGetPostComments [NSString stringWithFormat:@"%@GetPostComments",BASEURL]

#define KSubmitPanic  [NSString stringWithFormat:@"%@SubmitPanic",BASEURL]
#define KFacebookLogin  [NSString stringWithFormat:@"%@FacebookLogin",BASEURL]

#define KEditProfile  [NSString stringWithFormat:@"%@EditProfile",BASEURL]
#define KGetPostDetail [NSString stringWithFormat:@"%@GetPostDetail",BASEURL]

#define KLogin [NSString stringWithFormat:@"%@Login",BASEURL]
#define KLocationList [NSString stringWithFormat:@"%@LocationList",BASEURL]




#define KCheckedInOrOut [NSString stringWithFormat:@"%@CheckedInOrOut",BASEURL]
#define KMuteByID [NSString stringWithFormat:@"%@MuteByID",BASEURL]
#define KUnMutedByID [NSString stringWithFormat:@"%@UnMutedByID",BASEURL]
#define KDeleteUser [NSString stringWithFormat:@"%@DeleteUser",BASEURL]
#define KGetChatList [NSString stringWithFormat:@"%@GetChatList",BASEURL]
#define KSendMessageToUser [NSString stringWithFormat:@"%@SendMessageToUser",BASEURL]
#define KGetMessages [NSString stringWithFormat:@"%@GetMessages",BASEURL]
#define KGetUnReadMessageCount [NSString stringWithFormat:@"%@GetUnReadMessageCount",BASEURL]
#define KInsertGroup [NSString stringWithFormat:@"%@InsertGroup",BASEURL]
#define KGetGroups [NSString stringWithFormat:@"%@GetGroups",BASEURL]
#define KGetGroupMemberInfo [NSString stringWithFormat:@"%@GetGroupMemberInfo",BASEURL]

#define KGetGroupCodes [NSString stringWithFormat:@"%@GetGroupCodes",BASEURL]
#define KGetNotifications [NSString stringWithFormat:@"%@GetNotifications",BASEURL]
#define KGetGroupInfo [NSString stringWithFormat:@"%@GetGroupInfo",BASEURL]
#define KJoinAGroup [NSString stringWithFormat:@"%@JoinAGroup",BASEURL]
#define KGetUniversalConversationList [NSString stringWithFormat:@"%@GetUniversalConversationList",BASEURL]
#define KGetUniversalConversationList [NSString stringWithFormat:@"%@GetUniversalConversationList",BASEURL]
#define KGetUniversalConversationReplyList [NSString stringWithFormat:@"%@GetUniversalConversationReplyList",BASEURL]
#define KPostConversation [NSString stringWithFormat:@"%@PostConversation",BASEURL]
#define KPostConversationReply [NSString stringWithFormat:@"%@PostConversationReply",BASEURL]
#define KLikeGroupConversation [NSString stringWithFormat:@"%@LikeGroupConversation",BASEURL]
#define KGetGroceryList [NSString stringWithFormat:@"%@GetGroceryList",BASEURL]

#define KGetParentNewsFeed [NSString stringWithFormat:@"%@GetParentNewsFeed",BASEURL]
#define KGetNewsFeedReplies [NSString stringWithFormat:@"%@GetNewsFeedReplies",BASEURL]
#define KPostNewsFeedReply [NSString stringWithFormat:@"%@PostNewsFeedReply",BASEURL]
#define KLikeNewsFeed [NSString stringWithFormat:@"%@LikeNewsFeed",BASEURL]
#define KInsertGroupInputs [NSString stringWithFormat:@"%@InsertGroupInputs",BASEURL]
#define KInsertHasTag [NSString stringWithFormat:@"%@InsertHasTag",BASEURL]
#define KGetHashTagData [NSString stringWithFormat:@"%@GetHashTagData",BASEURL]


#define KSendMessageToGroup [NSString stringWithFormat:@"%@SendMessageToGroup",BASEURL]
#define KReadMessageByID [NSString stringWithFormat:@"%@ReadMessageByID",BASEURL]
#define KGetUserProfile [NSString stringWithFormat:@"%@GetUserProfile",BASEURL]
#define KCheckedOutOrInStatus [NSString stringWithFormat:@"%@CheckedOutOrInStatus",BASEURL]//checkOutWebService
#define KGetCheckedOutOrInStatus [NSString stringWithFormat:@"%@GetCheckedOutOrInStatus",BASEURL]
#define KGetGroupChatStartStatus [NSString stringWithFormat:@"%@GetGroupChatStartStatus",BASEURL]
#define KMuteByIDCreateGroupChat [NSString stringWithFormat:@"%@MuteByIDCreateGroupChat",BASEURL]
#define KGroupChatStart [NSString stringWithFormat:@"%@GroupChatStart",BASEURL]
#define KDeleteGroupChat [NSString stringWithFormat:@"%@DeleteGroupChat",BASEURL]
#define KGetUserChatList [NSString stringWithFormat:@"%@GetUserChatList",BASEURL]



#import <Foundation/Foundation.h>

@protocol CXConnectionDelegate <NSObject>
-(void)didReceiveCLXURLResponse:(id)object methodName:(NSString*)methodName;


@end

@interface CLXURLConnection : NSObject<NSURLConnectionDelegate,NSURLConnectionDataDelegate>{
    id                                      callerDelegate;
    SEL                                     callerMethod;
   
}
@property(nonatomic, weak) id <CXConnectionDelegate> delegate;


-(void)getParseInfoWithUrlPath:( __unsafe_unretained NSString*)urlPath WithSelector:(SEL)selector callerClass:(id)caller parameterDic:( __unsafe_unretained NSMutableDictionary *)parameterDic showloader:(BOOL)showloaders;

-(void)postParseInfoWithUrlPath:( __unsafe_unretained NSString*)urlPath WithSelector:(SEL)selector callerClass:(id)caller parameterDic:( __unsafe_unretained NSMutableDictionary *)parameterDic showloader:(BOOL)showloaders;



@end

//
//  CustomLabel.m
//  RIVALS
//
//  Created by Sanjay Kumar on 03/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import "CustomLabel.h"

@implementation CustomLabel

- (void)drawTextInRect:(CGRect)rect {
   
    UIEdgeInsets insets = {0, 10, 0, 10};
   [super drawTextInRect:UIEdgeInsetsInsetRect(rect, insets)];
}


@end

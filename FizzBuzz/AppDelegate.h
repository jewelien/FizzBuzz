//
//  AppDelegate.h
//  FizzBuzz
//
//  Created by Julien Guanzon on 1/28/15.
//  Copyright (c) 2015 Julien Guanzon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (BOOL)isBuzzed:(int)buzzNum;

- (BOOL) isFizzed:(int)fizzNum;

@end


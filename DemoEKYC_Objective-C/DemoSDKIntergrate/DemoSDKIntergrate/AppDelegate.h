//
//  AppDelegate.h
//  DemoSDKIntergrate
//
//  Created by Hung Nguyen  on 2/19/20.
//  Copyright © 2020 Hung Nguyen . All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <FinalSDK/FinalSDK.h>
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


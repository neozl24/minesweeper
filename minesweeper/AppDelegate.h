//
//  AppDelegate.h
//  minesweeper
//
//  Created by 钟立 on 2023/3/20.
//

#import <UIKit/UIKit.h>
#import <GameKit/GameKit.h>
#import "ViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    ViewController* mainViewController;
}

@property (nonatomic, strong) UIWindow *window;

@property NSString* currentPlayerID;
@property BOOL gameCenterAuthenticationComplete;

@end


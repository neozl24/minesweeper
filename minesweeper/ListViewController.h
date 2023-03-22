//
//  ListViewController.h
//  minesweeper
//
//  Created by 钟立 on 2023/3/22.
//

#import <UIKit/UIKit.h>
#import <GameKit/GameKit.h>
#import "GameDelegate.h"
#import "Record.h"

@interface ListViewController : UITableViewController <GKGameCenterControllerDelegate>

@property (nonatomic, copy) void (^dismissBlock)(void);

@end

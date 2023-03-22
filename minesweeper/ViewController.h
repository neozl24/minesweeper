//
//  ViewController.h
//  minesweeper
//
//  Created by 钟立 on 2023/3/20.
//

#import <UIKit/UIKit.h>
#import "GameDelegate.h"


@class InformationView, GameView;

@interface ViewController : UIViewController <UITextFieldDelegate, GameControlDelegate> {

    UIImageView* backgroundImageView;
    GameView* gameView;
    InformationView* boardView;
}

- (void)loadGame;
- (void)reloadGame;
- (void)continueGame;

@end


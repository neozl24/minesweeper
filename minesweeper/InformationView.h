//
//  InformationView.h
//  minesweeper
//
//  Created by 钟立 on 2023/3/22.
//

#import <UIKit/UIKit.h>
#import "GameDelegate.h"
#import "DigitView.h"

@interface InformationView : UIView <GameViewDelegate> {
    CGFloat width;
    CGFloat height;
    DigitView* minesNumView;
    DigitView* secondsView;
    UIButton* restartButton;
    UIButton* showListButton;
    UIButton* reloadButton;
}

@property (nonatomic, weak) id <GameControlDelegate> delegate;

@end

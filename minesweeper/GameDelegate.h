//
//  GameDelegate.h
//  minesweeper
//
//  Created by 钟立 on 2023/3/22.
//

#import <Foundation/Foundation.h>

@protocol GameViewDelegate <NSObject>

- (void)setRestartButtonHighlighted:(BOOL)highlighted;
- (void)setRestartButtonImageForNormal;
- (void)setRestartButtonImageForWinning;
- (void)setRestartButtonImageForFailure;
- (void)setMinesNum:(NSInteger)minesNum;
- (void)setSeconds:(NSUInteger)seconds;

@end


@protocol GameControlDelegate <NSObject>

- (void)getReadyForNewGame;
- (void)pauseGame;

- (void)getPlayerName;
- (void)showTopList;
- (void)askIfReload;

@end

//
//  DigitView.h
//  minesweeper
//
//  Created by 钟立 on 2023/3/21.
//

#import <UIKit/UIKit.h>

@interface DigitView : UIView {
    float width;
    float height;
    UILabel* digitLabel;
}

@property (nonatomic) NSInteger digit;

- (void)setDigit:(NSInteger)newDigit;

@end

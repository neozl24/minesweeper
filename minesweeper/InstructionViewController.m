//
//  InstructionViewController.m
//  minesweeper
//
//  Created by 钟立 on 2023/3/22.
//

#import "InstructionViewController.h"

@interface InstructionViewController () {
    UILabel* instructionLabel;
    UIScrollView* scrollView;
}

@end

@implementation InstructionViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.navigationItem.title = @"操作说明";
    
//    textView的第一次加载总是会卡一下，忍无可忍，尽管用多线程会强一点点，但还是不能忍受
//    CGRect textViewFrame = self.view.bounds;
//    textViewFrame.origin.x = 15;
//    textViewFrame.size.width -= 30;
//
//    dispatch_async(dispatch_get_global_queue(0, 0), ^{
//        UITextView* textView = [[UITextView alloc] initWithFrame:textViewFrame];
//        textView.editable = NO;
//        textView.font = [UIFont systemFontOfSize:15];
//        textView.textAlignment = NSTextAlignmentJustified;  //两端对齐！
//
//        dispatch_async(dispatch_get_main_queue(), ^{
//            textView.text = instructionText;
//            [self.view addSubview:textView];
//        });
//    });
    
    [self showText];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewDidLayoutSubviews {
    [scrollView removeFromSuperview];
    [instructionLabel removeFromSuperview];
    
    [self showText];
}

- (void)showText {
    NSString* instructionText = @"\n✪ 长按，重压（需要3D Touch功能的支持），或者往任意方向滑扫，都可以为格子标上旗子，其中滑扫的手势可能最省时间\n\n✪ 如果数字格的周围已标上对应数量的旗子，双击可以快速点开周围没有打开的格子。注意，假如你标错了旗子，双击会让你踩中周围的雷而导致游戏失败。双击会大大提升你的效率，但是恰当的单双击结合往往才是最高效的选择\n\n✪ 当点开所有的非雷区域时，游戏成功，这也意味着你不必为所有有雷的格子标上旗子，每一位扫雷高手都明白如何在这里节约时间\n\n✪ 一旦你的用时排在本机历史前5，就可以进入英雄榜了。如果登录了GameCenter，则会将该账户的最佳成绩上传到相应榜单，从而与其他玩家一较高下。";
    
    CGFloat labelWidth = self.view.bounds.size.width - 40;
    scrollView = [[UIScrollView alloc] initWithFrame:CGRectMake(20, 0, labelWidth, self.view.bounds.size.height - 80)];
    
    instructionLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, labelWidth, 0)];
    instructionLabel.text = instructionText;
    instructionLabel.textAlignment = NSTextAlignmentJustified;
    instructionLabel.numberOfLines = 0;
    
    [instructionLabel sizeToFit];
    CGFloat labelHeight = instructionLabel.frame.size.height;
    CGFloat contentHeight = labelHeight > scrollView.frame.size.height ? labelHeight : scrollView.frame.size.height + 5;
    scrollView.contentSize = CGSizeMake(labelWidth, contentHeight);
    
    [self.view addSubview:scrollView];
    [scrollView addSubview:instructionLabel];
}

@end

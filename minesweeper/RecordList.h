//
//  RecordList.h
//  minesweeper
//
//  Created by 钟立 on 2023/3/22.
//

#import <Foundation/Foundation.h>

@class Record;

@interface RecordList : NSObject

@property (nonatomic, readonly) NSArray* allRecords;

+ (instancetype)sharedList;

- (BOOL)checkNeedToUpdateWithTime:(double)newTime;

- (void)updateTopListWithName:(NSString*)name time:(double)time rowNum:(int)rowNum colNum:(int)colNum mineNum:(int)totalMines;

@end

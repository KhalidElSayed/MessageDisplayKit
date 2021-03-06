//
//  XHVoiceRecordHUD.h
//  MessageDisplayExample
//
//  Created by qtone-1 on 14-5-13.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507 本人QQ群（142557668）. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHVoiceRecordHUD : UIView

@property (nonatomic, assign) CGFloat peakPower;

- (void)startRecordingHUDAtView:(UIView *)view;
- (void)pauseRecord;
- (void)resaueRecord;
- (void)stopRecordCompled:(void(^)(BOOL fnished))compled;
- (void)cancelRecordCompled:(void(^)(BOOL fnished))compled;

@end

//
//  SMG.h
//  SMG_NothingIsAll
//
//  Created by 贾  on 2017/4/8.
//  Copyright © 2017年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 *  MARK:--------------------大脑控制器--------------------
 *  用于控制Input,Feel,Think,Mind,Output之间的工作;
 */
@class ThinkControl,Feel,Output,MindControl,AIMainThread;
@interface SMG : NSObject

+(SMG*) sharedInstance;
@property (strong,nonatomic) MindControl *mindControl;            //心理控制器
@property (strong,nonatomic) ThinkControl *thinkControl;//闲下时,开始理解分析自己的记忆和知识;
@property (strong,nonatomic) Feel *feel;            //感觉系统
@property (strong,nonatomic) Output *output;        //输出系统(肢体行为表情眼神,声音,文字等)
@property (strong,nonatomic) AIMainThread *mainThread;//意识的主线程

@end








//
//  AINet.h
//  SMG_NothingIsAll
//
//  Created by 贾  on 2017/9/17.
//  Copyright © 2017年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AIModel,AINetModel;
@interface AINet : NSObject

+(AINet*) sharedInstance;

//MARK:===============================================================
//MARK:                     < insert >
//MARK:===============================================================
-(AIModel*) insertInt:(int)data;
-(AIModel*) insertFLoat:(float)data;
-(AIModel*) insertString:(NSString*)data;
-(AIModel*) insertChar:(char)data;
-(AIModel*) insertObj:(id)data;
-(AIModel*) insertArr:(NSArray*)data;
-(AIModel*) insertLogic:(id)data;
-(AIModel*) insertCan:(id)data;
-(void) insertProperty:(id)data rootPointer:(AIPointer*)rootPointer;
-(void) insertModel:(AIModel*)model;


//MARK:===============================================================
//MARK:                     < update >
//MARK:===============================================================
-(void) updateNetModel:(AINetModel*)model;


//MARK:===============================================================
//MARK:                     < search >
//MARK:===============================================================
-(AIModel*) searchInt:(int)data;
-(AIModel*) searchFLoat:(float)data;
-(AIModel*) searchString:(NSString*)data;
-(AIModel*) searchChar:(char)data;
-(AIModel*) searchObj:(id)data;
-(AIModel*) searchArr:(NSArray*)data;
-(AIModel*) searchLogic:(id)data;
-(AIModel*) searchCan:(id)data;
-(AINetModel*) searchWithModel:(id)model;

@end

//
//  MIBlockDelegate.h
//  MatchIt
//
//  Created by Bill on 13-1-6.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MIBlock;

@protocol MIBlockDelegate <NSObject>

-(void)blockBeingSelected:(MIBlock*)block Index:(int)blockIndex NowSelected:(BOOL)selected;

@end

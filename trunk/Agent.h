//
//  Agent.h
//  FM11SX
//
//  Created by Amy Kettlewell on 10/11/15.
//  Copyright 2010 littleblue. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// scope
#define AGS_NATIONAL	0
#define AGS_REGIONAL	1
#define AGS_CONTINENTAL	2
#define AGS_WORLDWIDE	3

@interface Agent : NSObject {
	char scope, patience, agentFeeDemands, willingnessToToutPlayers;
	int basedNationID;
	NSMutableArray *clients;
}

@property(assign,readwrite) char scope, patience, agentFeeDemands, willingnessToToutPlayers;
@property(assign,readwrite) int basedNationID;
@property(copy,readwrite) NSMutableArray *clients;

- (NSArray *)scopeStrings;

@end

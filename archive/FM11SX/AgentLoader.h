//
//  AgentLoader.h
//  FM11SX
//
//  Created by Amy Kettlewell on 10/11/15.
//  Copyright 2010 littleblue. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Agent.h"

@interface AgentLoader : NSObject {

}

+ (Agent *)readFromData:(NSData *)data atOffset:(unsigned int *)byteOffset;

@end

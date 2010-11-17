//
//  ColourSaver.m
//  FM10SX
//
//  Created by Amy Kettlewell on 09/12/14.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "ColourSaver.h"

@implementation ColourSaver

+ (void)saveColour:(Colour *)object toData:(NSMutableData *)data extended:(BOOL)extended
{
	char cbuffer;
	short sbuffer;
	
	sbuffer = [object foreground];
	[data appendBytes:&sbuffer length:2];
	sbuffer = [object background];
	[data appendBytes:&sbuffer length:2];
	sbuffer = [object trim];
	[data appendBytes:&sbuffer length:2];
	
	if (extended) {
		sbuffer = [object number];
		[data appendBytes:&sbuffer length:2];
		sbuffer = [object numberTrim];
		[data appendBytes:&sbuffer length:2];
	}
	cbuffer = [object kitStyle];
	[data appendBytes:&cbuffer length:1];
}

@end

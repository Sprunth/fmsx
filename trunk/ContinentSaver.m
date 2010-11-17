//
//  ContinentSaver.m
//  FM10SX
//
//  Created by Amy Kettlewell on 09/12/18.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "ContinentSaver.h"

@implementation ContinentSaver

+ (void)saveContinent:(Continent *)object toData:(NSMutableData *)data
{
	BOOL bbuffer;
	char cbuffer;
	float fbuffer;
	int ibuffer;
	
	cbuffer = [object databaseClass];
	[data appendBytes:&cbuffer length:1];
	cbuffer = [object nameGender];
	[data appendBytes:&cbuffer length:1];
	cbuffer = [object federationNameGender];
	[data appendBytes:&cbuffer length:1];
	cbuffer = [object shortFederationNameGender];
	[data appendBytes:&cbuffer length:1];
	fbuffer = [object regionalStrength];
	[data appendBytes:&fbuffer length:4];
	bbuffer = [object continentSelected];
	[data appendBytes:&bbuffer length:1];
	ibuffer = [object rowID];
	[data appendBytes:&ibuffer length:4];
	ibuffer = [object UID];
	[data appendBytes:&ibuffer length:4];
}

@end

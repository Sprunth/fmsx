//
//  Continent.h
//  FM10SX
//
//  Created by Amy Kettlewell on 09/10/31.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Continent : NSObject {
	char databaseClass, nameGender, federationNameGender, shortFederationNameGender;
	float regionalStrength;
	BOOL continentSelected;
	int rowID, UID;
	
	NSString *name, *threeLetterName, *continentialityName, *federationName,
	*federationShortName;
}

@property(assign,readwrite) char databaseClass, nameGender, federationNameGender, shortFederationNameGender;
@property(assign,readwrite) float regionalStrength;
@property(assign,readwrite) BOOL continentSelected;
@property(assign,readwrite) int rowID, UID;
@property(copy,readwrite) NSString *name, *threeLetterName, *continentialityName, *federationName, *federationShortName;

@end

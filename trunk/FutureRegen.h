//
//  FutureRegen.h
//  FM10SX
//
//  Created by Amy Kettlewell on 09/11/16.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface FutureRegen : NSObject {
	char birthDay, birthMonth, age, unknownChar;
	int favouriteClub;
	
	NSString *firstName, *surname, *commonName;
}

@property(readwrite,assign) char birthDay, birthMonth, age, unknownChar;
@property(readwrite,assign) int favouriteClub;
@property(readwrite,copy) NSString *firstName, *surname, *commonName;

@end

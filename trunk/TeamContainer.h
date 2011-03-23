//
//  TeamContainer.h
//  FM10SX
//
//  Created by Amy Kettlewell on 09/10/26.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Controller.h"
#import "Colour.h"

@interface TeamContainer : NSObject {
	char teamContainerType, nameGender, shortNameGender;
	char attacking, depth, directness, flamboyancy, flexibility, freeRoles, marking,
		 offside, pressing, sittingBack, tempo, useOfPlaymaker, width, preferredFormation,
		 preferredFormation2, defensiveFormation, attackingFormation;
	
	NSString *name, *shortName;
	NSMutableArray	*colours, *teams, *relationships, *alternativeStadiums, *alternateKits, *bTeams, 
	*unknowns2, *coaches, *physios, *transferInfos;
}

@property(assign,readwrite) char teamContainerType, nameGender, shortNameGender,
attacking, depth, directness, flamboyancy, flexibility, freeRoles, marking, 
offside, pressing, sittingBack, tempo, useOfPlaymaker, width, preferredFormation, 
preferredFormation2, defensiveFormation, attackingFormation;
@property(copy,readwrite) NSString *name, *shortName;
@property(copy,readwrite) NSMutableArray *colours, *teams, *relationships, 
*alternativeStadiums, *alternateKits, *bTeams, *unknowns2, *physios, *coaches, 
*transferInfos;

- (NSArray *)teamObjects;
- (NSArray *)bTeamObjects;
- (void)setBTeamObjects:(NSArray *)val;

- (NSArray *)coachObjects;
- (NSArray *)physioObjects;
- (NSImage *)defaultLogo;
- (NSImage *)defaultTitleBG;
- (NSColor *)bgColour;
- (NSColor *)textColour;
- (NSColor *)trimColour;

- (Colour *)mainColour;

- (void)removeBTeam:(int)val;

@end

//
//  TeamContainer.m
//  FM10SX
//
//  Created by Amy Kettlewell on 09/10/26.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "TeamContainer.h"


@implementation TeamContainer

@synthesize name, shortName, colours, teams, relationships, alternativeStadiums, 
alternateKits, teamContainerType, nameGender, shortNameGender, attacking, depth, directness, 
flamboyancy, flexibility, freeRoles, marking, offside, pressing, sittingBack, tempo, 
useOfPlaymaker, width, preferredFormation, preferredFormation2, defensiveFormation, 
attackingFormation, controller, unknowns1, unknowns2;

- (NSArray *)teamObjects
{
	NSMutableArray *array = [[NSMutableArray alloc] init];
	
	for (id item in teams) {
		if ([item intValue] < [[[controller database] teams] count]) {
			[array addObject:[[[controller database] teams] objectAtIndex:[item intValue]]];
		}
	}
	
	return array;
}

@end

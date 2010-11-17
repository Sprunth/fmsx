//
//  CompetitionHistory.h
//  FM10SX
//
//  Created by Amy Kettlewell on 09/12/17.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface CompetitionHistory : NSObject {
	char databaseClass;
	short year;
	int competitionID, firstPlaceTeamID, secondPlaceTeamID, thirdPlaceTeamID, hostTeam1ID, hostTeam2ID, stadiumID, rowID, UID;
}

@property(assign,readwrite) char databaseClass;
@property(assign,readwrite) short year;
@property(assign,readwrite) int competitionID, firstPlaceTeamID, secondPlaceTeamID, thirdPlaceTeamID, hostTeam1ID, hostTeam2ID, stadiumID, rowID, UID;

@end

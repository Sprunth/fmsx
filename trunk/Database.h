//
//  Database.h
//  FM10SX
//
//  Created by Amy Kettlewell on 09/10/24.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "LangDB.h"
#import "SXImageXMLParser.h"
#import "Controller.h"

@interface Database : NSObject {
	Controller *controller;
	LangDB *langDB;
	SXImageXMLParser *graphics;
	
	BOOL langDBLoaded;
	
	unsigned int currentRecord;
	unsigned int totalRecords;
	unsigned int saveEndOffset;
	
	NSMutableArray *badAlliterations, *competitions, *nations, *competitionHistories;
	NSMutableArray *goodAlliterations, *personStats, *playerStats, *nonPlayerStats;
	NSMutableArray *awards, *stageNames, *weather, *descriptions, *people;
	NSMutableArray *cities, *stadiums, *stadiumChanges, *teams, *localAreas;
	NSMutableArray *clubs, *firstNames, *surnames, *commonNames, *sponsors;
	NSMutableArray *media, *languages, *currencies, *continents, *injuries;
	NSMutableArray *clubLinks, *unknowns1, *derbies, *agreements;
	
	NSString *status;
}

- (id)readGameDB:(NSData *)data atOffset:(unsigned int *)byteOffset;
- (void)saveGameDB:(NSMutableData *)data;
- (void)readLangDB:(NSString *)path;
- (void)parseGraphics:(NSString *)path;

@property(copy,readwrite) NSMutableArray *goodAlliterations, *badAlliterations, *awards,
*cities, *clubs, *media, *languages, *currencies, *continents, *injuries, *firstNames, 
*surnames, *commonNames, *sponsors, *stadiums, *stadiumChanges, *teams, *localAreas,
*stageNames, *weather, *descriptions, *people, *personStats, *playerStats, *nonPlayerStats, 
*competitions, *nations, *competitionHistories, *clubLinks, *unknowns1, *derbies, *agreements;
@property(copy,readwrite) NSString *status;
@property(assign,readwrite) Controller *controller;
@property(assign,readwrite) unsigned int currentRecord, totalRecords, saveEndOffset;
@property(assign,readwrite) BOOL langDBLoaded;
@property(assign,readwrite) LangDB *langDB;
@property(assign,readwrite) SXImageXMLParser *graphics;

- (NSArray *)formationStrings;
- (void)assignDescriptionNames:(NSString *)path;
- (void)assignInjuryNames:(NSString *)path;
- (void)assignContinentNames:(NSString *)path;
- (void)assignAwardNames:(NSString *)path;

@end

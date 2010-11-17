//
//  DebugController.h
//  FM10SX
//
//  Created by Amy Kettlewell on 09/10/23.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Controller.h"

@interface DebugController : NSObject {
	IBOutlet Controller *controller;
	IBOutlet NSPanel *lookupPanel;
	IBOutlet NSProgressIndicator *lookupProgressIndicator;
	
	IBOutlet NSTextField *goodAlliterationLookupField;
	IBOutlet NSTextField *badAlliterationLookupField;
	IBOutlet NSTextField *awardLookupField;
	IBOutlet NSTextField *cityLookupField;
	IBOutlet NSTextField *clubLookupField;
	IBOutlet NSTextField *competitionLookupField;
	IBOutlet NSTextField *continentLookupField;
	IBOutlet NSTextField *currencyLookupField;
	IBOutlet NSTextField *descriptionLookupField;
	IBOutlet NSTextField *injuryLookupField;
	IBOutlet NSTextField *languageLookupField;
	IBOutlet NSTextField *localAreaLookupField;
	IBOutlet NSTextField *mediaLookupField;
	IBOutlet NSTextField *firstNameLookupField;
	IBOutlet NSTextField *surnameLookupField;
	IBOutlet NSTextField *commonNameLookupField;
	IBOutlet NSTextField *nationLookupField;
	IBOutlet NSTextField *personLookupField;
	IBOutlet NSTextField *sponsorLookupField;
	IBOutlet NSTextField *stadiumLookupField;
	IBOutlet NSTextField *stadiumChangeLookupField;
	IBOutlet NSTextField *stageNameLookupField;
	IBOutlet NSTextField *teamLookupField;
	IBOutlet NSTextField *weatherLookupField;
	
	// date converter
	IBOutlet NSDatePicker *humanDateResultBox;
	IBOutlet NSTextField *FMDayResultBox;
	IBOutlet NSTextField *FMYearResultBox;
	IBOutlet NSTextField *FMDayBox;
	IBOutlet NSTextField *FMYearBox;
	IBOutlet NSDatePicker *humanDateBox;
	
}

- (IBAction)IDLookup:(id)sender;
- (IBAction)convertFMDateToHuman:(id)sender;
- (IBAction)convertHumanDateToFM:(id)sender;
- (IBAction)extractFMFFile:(id)sender;
- (IBAction)extractLangDBFile:(id)sender;

@end

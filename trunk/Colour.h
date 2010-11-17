//
//  Colour.h
//  FM10SX
//
//  Created by Amy Kettlewell on 09/10/24.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// kit numbers
#define AKN_HOME_KIT	0
#define AKN_AWAY_KIT	1
#define AKN_THIRD_KIT	2

// kit type
#define AKT_SHIRT	1
#define AKT_ICON	2
#define AKT_TEXT	3
#define AKT_SHORTS	4
#define AKT_SOCKS	5

// kit styles
#define KS_PLAIN						1
#define KS_PLAIN_DIFFERENT_SLEEVES		2
#define KS_STRIPES						3
#define KS_HOOPS						4
#define KS_HALVES_L_R					5
#define KS_QUARTERS						6
#define KS_CHECKS						7
#define KS_DIAGONAL_STRIPE_B_T			8
#define KS_STRIPE_AJAX					9
#define KS_SIDE_STRIPES					10
#define KS_STRIPES_WIDE					11
#define KS_STRIPES_PINSTRIPE			12
#define KS_HOOPS_WIDE					13
#define KS_HOOPS_PINSTRIPES				14
#define KS_HOOP_BOCA					15
#define KS_STRIPE_PSG					16
#define KS_STRIPE_RIGHT					17
#define KS_STRIPE_LEFT					18
#define KS_HALVES_T_B					19
#define KS_DIAGONAL_STRIPE_T_B			20
#define KS_HORIZONTAL_STRIPE_MIDDLE		21
#define KS_VERTICAL_STRIPE_RIGHT		22
#define KS_VERTICAL_STRIPE_LEFT			23
#define KS_VERTICAL_STRIPE_CENTRE		24
#define KS_LARGE_HORIZONTAL_STRIPE_TOP	25
#define KS_PLAIN_ONE_SLEEVE_RIGHT		26
#define KS_PLAIN_ONE_SLEEVE_LEFT		27
#define KS_HALVES_DIAGONAL				28
#define KS_V_STRIPE						29
#define KS_DOUBLE_HORIZONTAL_STRIPE_MIDDLE_SPACE	30
#define KS_DOUBLE_VERTICAL_STRIPE_RIGHT_SPACE		31
#define KS_DOUBLE_VERTICAL_STRIPE_LEFT_SPACE		32
#define KS_DOUBLE_VERTICAL_STIPE_MIDDLE_WITH_SPACE	33

#define KS_MAX	125

@interface Colour : NSObject {
	BOOL outfieldKit;
	char kitNumber, type, alternativeKitNumber;
	short year;
	int competitionUID;
	
	char kitStyle;
	unsigned short foreground, background, trim, number, numberTrim;
	
	NSColor *foregroundColour, *backgroundColour, *trimColour;
}

@property (assign,readwrite) char kitStyle;
@property (assign,readwrite) unsigned short foreground, background, trim,
number, numberTrim;
@property (retain,readwrite) NSColor *foregroundColour, *backgroundColour, *trimColour,
*numberColour, *numberTrimColour;

@property(assign,readwrite) BOOL outfieldKit;
@property(assign,readwrite) char kitNumber, type, alternativeKitNumber;
@property(assign,readwrite) short year;
@property(assign,readwrite) int competitionUID;

- (NSColor *)foregroundColour;
- (NSColor *)backgroundColour;
- (NSColor *)trimColour;
- (NSColor *)numberColour;
- (NSColor *)numberTrimColour;
+ (unsigned short)setColor:(NSColor *)color;
+ (NSColor *)getColor:(unsigned short)val;

- (NSArray *)kitStyleStrings;

- (NSArray *)kitNumberStrings;
- (NSArray *)typeStrings;

@end

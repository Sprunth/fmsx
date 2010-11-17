//
//  Colour.m
//  FM10SX
//
//  Created by Amy Kettlewell on 09/10/24.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "Colour.h"

@implementation Colour

@synthesize kitStyle, foreground, background, trim, number, numberTrim,
kitNumber, type, alternativeKitNumber, year, competitionUID, outfieldKit;

+ (unsigned short)setColor:(NSColor *)color
{
	unsigned char r,g,b;
	
	r = ([color redComponent] * 31.875);
	g = ([color greenComponent] * 31.875);
	b = ([color blueComponent] * 31.875);
	
	return ((r << 10) | (g << 5) | (b << 0));
}

+ (NSColor *)getColor:(unsigned short)val
{
	short r,g,b;
	float red,green,blue;
	
	r = ((val & 0xF800) >> 10);
	g = ((val & 0x07C0) >> 5);
	b = ((val & 0x003E) >> 0);
	
	red = (float) r/31.875f;
	green = (float) g/31.875f;
	blue = (float) b/31.875f;
	
	NSColor *colour = [NSColor colorWithCalibratedRed:red green:green blue:blue alpha:1.0];
	
	return colour;
}

- (NSColor *)backgroundColour					{ return [[Colour getColor:background] retain]; }
- (void)setBackgroundColour:(NSColor *)color	{ background = [Colour setColor:color]; }

- (NSColor *)foregroundColour					{ return [[Colour getColor:foreground] retain]; }
- (void)setForegroundColour:(NSColor *)color	{ foreground = [Colour setColor:color]; }

- (NSColor *)trimColour							{ return [[Colour getColor:trim] retain]; }
- (void)setTrimColour:(NSColor *)color			{ trim = [Colour setColor:color]; }

- (NSColor *)numberColour						{ return [[Colour getColor:number] retain]; }
- (void)setNumberColour:(NSColor *)color		{ number = [Colour setColor:color]; }

- (NSColor *)numberTrimColour					{ return [[Colour getColor:numberTrim] retain]; }
- (void)setNumberTrimColour:(NSColor *)color	{ numberTrim = [Colour setColor:color]; }

- (NSArray *)kitStyleStrings
{
	NSArray *strings = [NSArray arrayWithObjects:
						NSLocalizedString(@"Invalid", @"general 'invalid' option"),
						NSLocalizedString(@"Plain", @"kit style"),
						NSLocalizedString(@"Plain (Different Sleeves)", @"kit style"),
						NSLocalizedString(@"Stripes", @"kit style"),
						NSLocalizedString(@"Hoops", @"kit style"),
						NSLocalizedString(@"Halves (Left-Right)", @"kit style"),
						NSLocalizedString(@"Quarters", @"kit style"),
						NSLocalizedString(@"Checks", @"kit style"),
						NSLocalizedString(@"Diagonal Stripe (Bottom-Top)", @"kit style"),
						NSLocalizedString(@"Stripe (Ajax)", @"kit style"),
						NSLocalizedString(@"Side Stripes", @"kit style"),
						NSLocalizedString(@"Stripes (Wide)", @"kit style"),
						NSLocalizedString(@"Stripes (Pinstripe)", @"kit style"),
						NSLocalizedString(@"Hoops (Wide)", @"kit style"),
						NSLocalizedString(@"Hoops (Pinstripes)", @"kit style"),
						NSLocalizedString(@"Hoop (Boca)", @"kit style"),
						NSLocalizedString(@"Stripe (PSG)", @"kit style"),
						NSLocalizedString(@"Stripe (Right)", @"kit style"),
						NSLocalizedString(@"Stripe (Left)", @"kit style"),
						NSLocalizedString(@"Halves (Top-Bottom)", @"kit style"),
						NSLocalizedString(@"Diagonal Stripe (Top-Bottom)", @"kit style"),
						NSLocalizedString(@"Horizontal Stripe (Middle)", @"kit style"),
						NSLocalizedString(@"Vertical Stripe (Right)", @"kit style"),
						NSLocalizedString(@"Vertical Stripe (Left)", @"kit style"),
						NSLocalizedString(@"Vertical Stripe (Centre)", @"kit style"),
						NSLocalizedString(@"Large Horizontal Stripe (Top)", @"kit style"),
						NSLocalizedString(@"Plain One Sleeve (Right)", @"kit style"),
						NSLocalizedString(@"Plain One Sleeve (Left)", @"kit style"),
						NSLocalizedString(@"Diagonal Halves", @"kit style"),
						NSLocalizedString(@"V Stripe", @"kit style"),
						NSLocalizedString(@"Double Horizontal Stripe (Middle Space)", @"kit style"),
						NSLocalizedString(@"Double Vertical Stripe (Right Space)", @"kit style"),
						NSLocalizedString(@"Double Vertical Stripe (Left Space)", @"kit style"),
						NSLocalizedString(@"Double Vertical Stripe (Centre Space)", @"kit style"),
						nil];
	return strings;
}

- (NSArray *)kitNumberStrings
{
	NSArray *strings = [NSArray arrayWithObjects:
						NSLocalizedString(@"Home", @"kit type"),
						NSLocalizedString(@"Away", @"kit type"),
						NSLocalizedString(@"Third", @"kit type"),
						nil];
	return strings;
}

- (NSArray *)typeStrings
{
	NSArray *strings = [NSArray arrayWithObjects:
						NSLocalizedString(@"Invalid", @"general 'invalid' option"),
						NSLocalizedString(@"Shirt", @"kit type"),
						NSLocalizedString(@"Icon", @"kit type"),
						NSLocalizedString(@"Text", @"kit type"),
						NSLocalizedString(@"Shorts", @"kit type"),
						NSLocalizedString(@"Socks", @"kit type"),
						nil];
	return strings;
}

@end

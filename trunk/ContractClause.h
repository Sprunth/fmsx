//
//  ContractClause.h
//  FM10SX
//
//  Created by Amy Kettlewell on 09/11/20.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// contract clause types
#define CCT_MIN_FEE_RELEASE					0
#define CCT_RELEGATION_RELEASE				1
#define CCT_NON_PROMOTION_RELEASE			2
#define CCT_YEARLY_WAGE_RISE_PERCENTAGE		3
#define CCT_PROMOTION_WAGE_INCREASE			4
#define CCT_RELEGATION_WAGE_DECREASE		5


/*

#define CCT_MANAGER_COACH_RELEASE			6			
#define CCT_NUMBER_OF_CLAUSES				7
// following types are used when clauses are active
#define CCT_RELEGATION_RELEASE_ACTIVATED	9		
#define CCT_NON_PROMOTION_RELEASE_ACTIVATED	10
// used for transfer offer screen when player has clause in loan contract
#define CCT_LOAN_MIN_FEE_RELEASE			12
#define CCT_FIRST_OPTION_MIN_FEE_RELEASE	13
#define CCT_BUY_BACK_RELEASE				14				// buy back for normal transfers
#define CCT_CALL_BACK_RELEASE				15				// call back for coownerships
*/

@interface ContractClause : NSObject {
	char type, unknownChar1;
	int fee;
}

@property(assign,readwrite) char type, unknownChar1;
@property(assign,readwrite) int fee;

@end

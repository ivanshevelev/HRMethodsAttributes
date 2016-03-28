//
//  SomeClass.h
//  MethodsAttributes
//
//  Created by Ivan Shevelev on 15/03/16.
//  Copyright © 2016 Sibers. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <HRMethodsAttributes/HRMethodAttributes.h>

@interface SomeClass : NSObject

-(void)makeMeCool DEPRECATED_REASON("'cause, lol");

-(void)doSomething DEPRECATED;

-(void)dSomething UNAVAILABLE;

-(void)doSomethingElse UNAVAILABLE_REASON("Use -doSmthngElse: instead");

-(void)doSmthngElse;

@end

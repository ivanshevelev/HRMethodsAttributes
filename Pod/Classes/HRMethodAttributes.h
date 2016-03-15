//
//  HRMethodAttributes.h
//  MethodsAttributes
//
//  Created by Ivan Shevelev on 15/03/16.
//  Copyright © 2016 Sibers. All rights reserved.
//

#import <Foundation/Foundation.h>

#define DEPRECATED __attribute__ ((deprecated))
#define DEPRECATED_REASON(reason) __attribute__ ((deprecated(reason)))
#define UNAVAILABLE __attribute__((unavailable))
#define UNAVAILABLE_REASON(reason) __attribute__((unavailable(reason)))

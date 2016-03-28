//
//  HRMethodAttributes.h
//  MethodsAttributes
//
//  Created by Ivan Shevelev on 15/03/16.
//  Copyright © 2016 Sibers. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  __attribute__ ((deprecated)) define.
 */
#define DEPRECATED __attribute__ ((deprecated))

/**
 *  __attribute__ ((deprecated("reason"))) define
 *
 *  @param reason C string.
 */
#define DEPRECATED_REASON(reason) __attribute__ ((deprecated(reason)))

/**
 *  __attribute__((unavailable)) define.
 */
#define UNAVAILABLE __attribute__((unavailable))

/**
 *  __attribute__((unavailable("reason"))) define.
 *
 *  @param reason C string.
 */
#define UNAVAILABLE_REASON(reason) __attribute__((unavailable(reason)))

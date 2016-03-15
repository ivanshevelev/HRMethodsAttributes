//
//  HRViewController.m
//  HRMethodsAttributes
//
//  Created by Ivan Shevelev on 03/15/2016.
//  Copyright (c) 2016 Ivan Shevelev. All rights reserved.
//

#import "HRViewController.h"

#import "SomeClass.h"

@interface HRViewController ()

@end

@implementation HRViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    SomeClass *smClss = [SomeClass new];
    [smClss doSomething];
    //[smClss doSomethingElse]; 'cause unavailable. Uncomment to check it.
    [smClss makeMeCool];
    //[smClss dSomething]; 'cause unavailable. Uncomment to check it.
    [smClss doSmthngElse];
}

@end

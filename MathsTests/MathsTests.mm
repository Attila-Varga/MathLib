//
//  MathsTests.m
//  MathsTests
//
//  Created by Attila Varga on 22/03/2019.
//  Copyright © 2019 Attila Varga. All rights reserved.
//
#include "Vector2.h"
#import <XCTest/XCTest.h>

@interface MathsTests : XCTestCase

@end

@implementation MathsTests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
    
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void) testVectorEqual {
    Vector2 vec1;
    Vector2 vec2;
    vec1.x = 17;
    vec2.x = vec1.x;
    vec1.y = 22;
    vec2.y = vec1.y;
    
    XCTAssert(vec1 == vec2,"Vectors should be equal");
}

- (void) testVectorNotEqual {
    Vector2 vec1;
    Vector2 vec2;
    vec1.x = 5;
    vec2.x = 7;
    vec1.y = 9;
    vec2.y = 11;
    
    XCTAssert(vec1 != vec2,"Vectors should NOT be equal");
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end

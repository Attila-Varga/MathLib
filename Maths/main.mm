//
//  main.m
//  Math
//
//  Created by Attila Varga on 22/03/2019.
//  Copyright © 2019 Attila Varga. All rights reserved.
//

#include "Vector2.h"
#include <iostream>

int main(int argc, const char * argv[])
{
    Vector2 vec;
    vec.x = 5;
    vec.y = 12;
    
    Vector2 vec2;
    vec2.x = 8;
    vec2.y = -9;
    
    std::cout<<vec.angleBetween(vec2)<<std::endl;
    
    
    //delete vec;
    //delete vec2;
}

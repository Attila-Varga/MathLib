//
//  Vector2.hpp
//  MathLib
//
//  Created by Attila Varga on 22/03/2019.
//  Copyright © 2019 Attila Varga. All rights reserved.
//

#ifndef Vector2_h
#define Vector2_h

class Vector2
{
public:
    Vector2();
    Vector2(const float x, const float y);
    Vector2(const float array[2]);
    Vector2(const float scaler);
    ~Vector2();
    
    double x,y;
    
    //Logic operations
    Vector2& operator = (const Vector2 &vec);
    Vector2& operator = (const float scalar);
    bool operator == (const Vector2 &vec) const;
    bool operator != (const Vector2 &vec) const;
    bool operator < (const Vector2 &vec) const;
    bool operator > (const Vector2 &vec) const;
    
    //arithmetic operations
    Vector2 operator + (const Vector2 &vec) const;
    Vector2 operator - (const Vector2 &vec) const;
    Vector2 operator * (const Vector2 &vec) const;
    Vector2 operator * (const double scalar) const;
    Vector2 operator / (const Vector2 &vec) const;
    Vector2 operator / (const double scalar) const;
    Vector2 operator + () const;
    Vector2 operator - () const;
    
    //Vector functions
    double length() const;
    double distance(const Vector2 &vec) const;
    double dotProduct(const Vector2 &vec) const;
    double crossProduct(const Vector2 &vec) const;
    double normalise();
    Vector2 midPoint(const Vector2 &vec) const;
    Vector2 perpendicular(const Vector2 &vec) const;
    double angleBetween(const Vector2 &vec) const;
};

#endif /* Vector2_h */

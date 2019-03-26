//
//  Vector2.cpp
//  MathLib
//
//  Created by Attila Varga on 22/03/2019.
//  Copyright © 2019 Attila Varga. All rights reserved.
//

#include "Vector2.h"
#include "math.h"
#include <assert.h>

Vector2::Vector2()
{
}

Vector2::~Vector2()
{
}

Vector2::Vector2(const float x, const float y)
{
    this->x = x;
    this->y = y;
}

Vector2::Vector2(const float array[2])
{
    x = array[0];
    y = array[1];
}

Vector2::Vector2(const float scaler)
{
    x= scaler;
    y = scaler;
}

Vector2& Vector2::operator = (const Vector2 &vec)
{
    x = vec.x;
    y = vec.y;
    
    return *this;
}

Vector2& Vector2::operator = (const float scalar)
{
    x = scalar;
    y = scalar;
    
    return *this;
}

bool Vector2::operator == (const Vector2& vec) const
{
    return (x == vec.x && y == vec.y);
}

bool Vector2::operator != (const Vector2 &vec) const
{
    return ( x != vec.x || y != vec.y);
}

bool Vector2::operator < (const Vector2 &vec) const
{
    if( x < vec.x && y  < vec.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Vector2::operator > (const Vector2 &vec) const
{
    if( x > vec.x && y  > vec.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Vector2 Vector2::operator + (const Vector2 &vec) const
{
    return Vector2(
                   x + vec.x,
                   y + vec.y);
}

Vector2 Vector2::operator - (const Vector2 &vec) const
{
    return Vector2(
                   x - vec.x,
                   y - vec.y);
}

Vector2 Vector2::operator * (const double scalar) const
{
    return Vector2(
                   x * scalar,
                   y * scalar);
}

Vector2 Vector2::operator * (const Vector2 &vec) const
{
    return Vector2(
                   x * vec.x,
                   y * vec.y);
}

Vector2 Vector2::operator / (const double scalar) const
{
    //check for division by zero
    assert(scalar != 0.0);
    
    return Vector2(
                   x * (1.0f / scalar),
                   y * (1.0f / scalar));
}

Vector2 Vector2::operator / (const Vector2 &vec) const
{
    return Vector2(
                   x / vec.x,
                   y / vec.y);
}

Vector2 Vector2::operator + () const
{
    return *this;
}

Vector2 Vector2::operator - () const
{
    return Vector2( -x, -y);
}

double Vector2::length() const
{
    return sqrt(x * x + y * y);
}

double Vector2::distance(const Vector2 &vec) const
{
    return(*this - vec).length();
}

double Vector2::dotProduct(const Vector2 &vec) const
{
    return x * vec.x + y * vec.y;
}

double Vector2::crossProduct(const Vector2 &vec) const
{
    return x * vec.y - y * vec.x;
}

double Vector2::normalise()
{
    double length = sqrt(x * x + y * y);
    if(length > 0.0f)
    {
        x *= 1.0f / length;
        y *= 1.0f / length;
    }
    return length;
}

Vector2 Vector2::midPoint(const Vector2 &vec) const
{
    return Vector2(
                   (x + vec.x) * 0.5f,
                   (y + vec.y) * 0.5f );
}

Vector2 Vector2::perpendicular(const Vector2 &vec) const
{
    return Vector2(-y,x);
}


//Returns the radian value of the angle between another vector
double Vector2::angleBetween(const Vector2 &vec) const
{
    return atan2(x * vec.y - y * vec.x, dotProduct(vec));
}

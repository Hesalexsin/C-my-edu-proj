#include <iostream>
#include "std_lib_facilities.h"
#include "vec2d.h"

Vec2d::Vec2d(double xx, double yy)
    :x{xx}, y{yy}
{
    this ->x = xx;
    this ->y =yy;
}

Vec2d::operator+=(Vec2d q)
{
    x +=q*x;
    y +=q*y;
    return *this;
}

Vec2d::operator*= (Vec2d v, double q)
{
    v.x *= q;
    v.y *= q;
}


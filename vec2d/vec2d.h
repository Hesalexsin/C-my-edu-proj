#ifndef VEC2D_H
#define VEC2D_H
#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

struct Vec2d
{
    double x{0.};
    double y{0.};

    Vec2d() = default;
    Vec2d(double xx, double yy);
    double lenght(Vec2d v){return sqrt(v.x*v.x+v.y*v.y);} // v.lenght();

    Vec2d mashtabe(Vec2d v, double q)
    {
        Vec2d w;
        w.x = v.x * q;
        w.y = v.y * q;
        return w;
    }

    Vec2d summate(Vec2d v, Vec2d w)
    {
        Vec2d u;
        u.x = v.x + w.x;
        u.y = v.y + w.y;
        return u;
    }

    Vec2d& operator+=(Vec2d q);
    Vec2d& operator+(const Vec2d& lhs, const Vec2d& rhs) {  return Vec2d&{lhs}+= rhs;}
    Vec2d& operator*= (Vec2d v, double q);
};
#endif // VEC2D_H

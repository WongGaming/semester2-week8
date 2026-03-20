
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    new.y = y;
    return new;
}
Line makeLine( Point p1, Point p2 )
{
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}
Triangle makeTriangle( Point p1, Point p2, Point p3 )
{
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLength( Line l )
{
    float a, a2, b, b2, c2, c;
    a = l.p[1].x - l.p[0].x;
    b = l.p[1].y - l.p[0].y;
    a2 = a * a;
    b2 = b * b;
    c2 = sqrt(a2 + b2);
}

float triangleArea( Triangle t )
{
    float a, b, c, total;
    a = t.p[0].x * (t.p[1].x - t.p[2].x);
    b = t.p[1].x * (t.p[2].x - t.p[0].x);
    c = t.p[2].x * (t.p[0].x - t.p[1].x); 
    total = a + b + c;
    return 1/2 * total;
}

bool samePoint( Point p1, Point p2 )
{
    if (p1.x == p2.x && p1.y == p2.y)
    {
        return true;
    }
    return false;
}

bool pointInLine( Point p, Line l)
{
    if (samePoint(p, l.p[0]) || samePoint(p, l.p[1]))
    {
        return true;
    }
    return false;
}

bool pointInTriangle( Point p, Triangle t )
{
    if (samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]))
    {
        return true;
    }
    return false;
}
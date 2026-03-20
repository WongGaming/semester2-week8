
// define the structure here 
#include <math.h>
typedef struct _point {
    int x;
    int y;

} Point;

// state function headers here

float distance( Point p, Point q ) {
    // implement distance here
    float dx = p.x - q.x;
    float dy = p.y - q.y;
    return sqrt(dx * dx + dy * dy);
}
Point reflect (Point q)
{
    q.y = -q.y;
    return q;
}
Point shift (Point q, Point dq)
{
    q.x = q.x + dq.x;
    q.y = q.y + dq.y;
    return q;
}
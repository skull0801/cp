#include <cmath>

#define PI 3.141592653589793

class Point {
public:
    double x, y;

    Point(double xv = 0, double yv = 0) : x(xv), y(yv) {}
};

double distance(const Point& P, const Point& Q)
{
    return hypot(P.x - Q.x, P.y - Q.y);
}

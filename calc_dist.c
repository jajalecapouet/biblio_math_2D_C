#include <math.h>

double  calc_dist(int x, int y)
{
    double dx;
    double dy;

    dx = (double) x;
    dy = (double) y;
    return (sqrt(dx * dx + dy * dy));
}

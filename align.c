#include <math.h>

// retourne x et y les coordonnees d'un point aligne aux points {ex, ey} et {bx, by} et situe a une distance dist du point {ex, ey}
// le sens de la distance depend du signe de dist et de si ex > bx
void    align(int ex, int ey, int bx, int by, int dist, int *x, int *y)
{
    double  a;
    double  e_x;
    double  e_y;
    double  b_x;
    double  b_y;
    double  b;
    double  dist_d;
    double  sign;

    e_x = (double) ex;
    e_y = (double) ey;
    b_x = (double) bx;
    b_y = (double) by;
    sign = -1.0;
    if ((dist > 0 && bx < ex) || (dist < 0 && bx > ex))
        sign = 1.0;
    if (ex == bx)
        a = 0;
    else
        a = (e_y - b_y) / (e_x - b_x);
    if (dist < 0)
        dist = -dist;
    dist_d = (double) dist;
    b = e_y - (a * e_x);
    *x = (int)(((sign * dist_d) / sqrt((a * a) + 1.0)) + e_x);
    *y = (int)((a * (double)(*x)) + b);
}

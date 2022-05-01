#include <sys/time.h>

//un algo choisissant une valeur entre a et b
int rand2(int a, int b)
{
    int             diff;
    struct timeval  t;
    static long int rand = 0;
    float           ret;

    if (!rand)
    {
        gettimeofday(&t, NULL);
        rand = t.tv_usec;
    }
    diff = a - b;
    ret = (float)(rand % 11) / 11.0;
    rand /= 11;
    return (a - (int)(ret * diff));
}

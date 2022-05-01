#include <math.h>

int intercept_to_push(t_monster monster, t_hero hero, int base)
{
    int x1;
    int x2;
    int y1;
    int y2;
    int t;
    
    t = 0;
    //fprintf(stderr, "monster xy %d | %d id %d\n", monster.x, monster.y, monster.id);
    x1 = monster.x;
    y1 = monster.y;
    x2 = hero.x;
    y2 = hero.y;
    while (1) // Condition d'arret ici si besoin
    {
        if (calc_dist(x2 - x1, y2 - y1) < 1280.0 + (double)t * 800.0)
        {
            if (t)
                printf("MOVE %d %d zizou??\n", t_x(base, x1), t_y(base, y1));
            else
            {
                printf("SPELL WIND %d %d ZIDANE!!\n", t_x(base, 17630), t_y(base, 9000));
                return (100);
            }
            return (t);
        }
        x1 += monster.vx;
        y1 += monster.vy;
        t++;
    }
    return (-1);
}

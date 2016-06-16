#include <stdio.h>
#include <math.h>

#define PI 3.141595
#define PHI -PI/50

int main()
{
    float x,y;
    float m = 4.0, n = 4.0;

    float dst_x, dst_y;
    int t = 0;

    printf("Input coordinates: ");
    scanf("%f %f", &x, &y);

    while(t < 40)
    {
        dst_x = x*cos(PHI) - y*sin(PHI) + ( -m*(cos(PHI) - 1) + n*sin(PHI) );
        dst_y = x*sin(PHI) + y*cos(PHI) + ( -n*(cos(PHI) - 1) - m*sin(PHI) );

        printf("Coordinates: x=%d y=%d\n", (int)(dst_x + 0.5f), (int)(dst_y + 0.5f));

        x = dst_x;
        y = dst_y;

        t++;
    }


    return 0;
}











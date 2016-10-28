#include <stdio.h>
#include <stdlib.h>

#define inf_plus (float)1/(float)0
#define inf_minus (float)-1/(float)0

int main()
{
	float a = 4;
	float b = 0;
    float c = 0*(a/b);

    float e = 0.233455;

    printf("f2: %f\n", c);
    printf("f3: %d\n", c == c);
    printf("f4: %f\n", inf_plus);
    printf("f5: %d\n", c == inf_plus);
    printf("f6: %d\n", c == c);
    printf("f6: %d\n", e == e);

/*
    int x = 4;
    int y = 0;

    printf("d: %d\n", x/y);
*/

	return 0;
}

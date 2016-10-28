#include <stdio.h>

#define A(x) ((x++)*(x++))

int main()
{
    int x = 1;
    int y = A(x++);

    printf("x:%d  y:%d \n", x, y);  

    return 0;
}

#include <stdio.h>

typedef enum
{
    ONE = (1<<0),
    TWO = (1<<1),
} Shifted;


int main()
{
    Shifted a = ONE;
    printf("ONE:%d\n", a);

    a = TWO;
    printf("TWO:%d\n", a);

    a = -1;
    printf("-1:%d\n", a);

    a = 1234;
    printf("1234:%d\n", a);

    return 0;
}










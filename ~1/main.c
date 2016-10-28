#include <stdio.h>

int main()
{
    int a = ~1;
    int b = 5;
    int c = 7;
    int e = 13;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("b & a= %d\n", b & a);
    printf("c & a= %d\n", c & a);
    printf("e & a= %d\n", e & a);

    return 0;
}

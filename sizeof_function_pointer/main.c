#include <stdio.h>

struct A {
    int age;
    int weight;
};

void (*x) (int a, int b);
double (*y) (int a, int b, double c, struct A *d);

int main()
{
    printf("sizeof x: %u\n", sizeof(x));
    printf("sizeof y: %u\n", sizeof(y));

    return 0;
}

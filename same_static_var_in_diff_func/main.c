#include <stdio.h>
#include <stdlib.h>

void a()
{
    static int i;
    int d[50];

    i++;
    
    printf("  a --> i: %d\n", i);
}

void b()
{
    static int i;

    i++;
    
    printf("  b --> i: %d\n", i);
}

int main()
{
    a(); // a 1
    b(); // b 1

    a(); // a 2
    a(); // a 3

    b(); // b 2
    
    return 0;
}

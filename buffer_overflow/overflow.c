#include <stdio.h>

int main()
{
    
    int i = 0, a[5] = {0,};

    for(;i < 10; i++)
        printf("%p   %d   %p\n", &a[i], a[i], a[i]);

    return 0;
}

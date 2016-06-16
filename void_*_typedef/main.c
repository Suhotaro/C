#include <stdio.h>

typedef void *Test;
typedef void *Test2;

int main()
{
    void *a = NULL;
    void *b;

    Test c = NULL;
    Test d;

    printf("a:%p\nb:%p\nc:%p\nd:%p\n", a, b ,c, d);

    return 0;
}


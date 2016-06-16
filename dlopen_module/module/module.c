#include <stdio.h>

#define API __attribute__ ((visibility("default")))
#define INTRN __attribute__ ((visibility("hidden")))

INTRN void a()
{
    printf("a\n");
}

API void b()
{
    printf("b\n");
}

API int c()
{    
    printf("c\n");
    return 5;
}

API void  d()
{
    printf("d\n");

    a();
    b();
}

INTRN void e()
{
    printf("e\n");
}

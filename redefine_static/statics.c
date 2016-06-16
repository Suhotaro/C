#include <stdio.h>

#include "static.h"

static void b()
{
   printf("b\n");
}


void a(void)
{
    printf("a\n");
    
    b();
}


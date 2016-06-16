#include <stdio.h>

#include "A/foo.h"
#include "A/bar.h"


int main ()
{
    printf( "foo %d \n", foo() );

    printf( "bar %d \n", bar() );

    return 0;
}

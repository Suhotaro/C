#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 0;

    for(; i < 1000000; i++)
    {
        print_global_var();
    }

    return 0;
}

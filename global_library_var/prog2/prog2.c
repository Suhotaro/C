#include <stdio.h>
#include <stdlib.h>

int main()
{
    print_global_var();
    change_global(33, 44);
    print_global_var();

    return 0;
}

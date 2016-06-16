#include <stdio.h>
#include <stdlib.h>

#include "../glob/global.h"

int main()
{

    init_buffers();

    printf("%p %p %p\n", buffers[0], buffers[1], buffers[2]);

    return 0;
}

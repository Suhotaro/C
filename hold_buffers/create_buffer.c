#include <stdio.h>
#include <stdlib.h>

#include "global.h"


void  init_buffers(void)
{
    Buffer *b = calloc(1, sizeof(Buffer));
    Buffer *b2 = calloc(1, sizeof(Buffer));
    Buffer *b3 = calloc(1, sizeof(Buffer));

    buffers[0] = b;
    buffers[1] = b2;
    buffers[2] = b3;
}

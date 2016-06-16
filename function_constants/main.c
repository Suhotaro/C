#include <stdio.h>

#define SIG_ERR (void(*)()) -1

int main()
{
    int i = SIG_ERR;

   printf("%d\n", i);

    return 0;
}

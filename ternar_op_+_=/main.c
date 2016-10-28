#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tmp = 1;

    tmp = (tmp == 1 ? 5: 0);
    printf("%d\n", tmp);

    tmp = 4;

    tmp = (tmp == 4 ?: 0);
    printf("%d\n", tmp);

    return 0;
}

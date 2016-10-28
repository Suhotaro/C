#include <stdio.h>

#define size 3

int a[size][size][size][size];

int main()
{
    int i, j, k, t, res = 0;

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            for (k = 0; k < size; k++)
                for (t = 0; t < size; t++)
                    res++;

    printf("res: %d\n", res);

    return 0;
}

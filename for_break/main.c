#include <stdio.h>

int main()
{
    int t = 0;
    int i = 0;
    int j = 0;

    while( t < 10)
    {
        printf("t: %d\n", t);

        for (i = 0; i < 5; i++)
            printf("1 ");

        printf("\n ");

        for (j = 0; j < 5; j++)
        {
            printf("2 ");
            if (t == 2)
                break;            
        }

        printf("\n\n");

        t++;
    }


    for (i = 0; i < 5; i++)
    {
        printf("%d ", i);
        printf("\n ");

        for (j = 0; j < 5; j++)
        {
            printf("%d ", j);
            if (j == 3)
                break;
        }
       printf("\n ");
    }
           
}


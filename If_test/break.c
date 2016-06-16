#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    if( i != 12345 )
    {
        printf("a\n");
        for( ; i<10; i++ )
        {   
            printf("%d\n", i  + 1);
            if(i == 7)
                break;
        }

         
        printf("b\n");
    }

    printf("c\n");

    return 0;
}

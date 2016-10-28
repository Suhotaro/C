#include <stdio.h>

int main()
{
    int t = 0;
    int i = 0;

    for(i = 0; i < 5; i++)
    {
    	printf("i=%d\n", i);

        while( t < 5)
        {
        	printf("  t=%d\n", t);

        	if (i >= 3)
        		break;

        	t++;
        }

        t = 0;
    }

    return 0;
}


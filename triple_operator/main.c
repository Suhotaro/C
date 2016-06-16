#include <stdio.h>

int main()
{
    int tmp = 1;
    printf("%d\n",tmp ?:0);
    
    tmp = 5;
    printf("%d\n",tmp ? tmp :0);  

    tmp = 5;
    printf("%d\n",tmp ?:0);

    return 0;
}

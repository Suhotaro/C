#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char str[10];
    int num;
} A, *B;


B foo(void)
{
    B c = malloc( sizeof(A) );

    strcpy(c->str, "hello\n");
    c->num = 5;

    return c;
}



int main ()
{

    printf("  %s", foo()->str);   

    return 0;
}


//void (* signal(int __sig, void (* __func)(int))) (int)

//double ( *( *f )( double( * ) ( double ) ) )( double )

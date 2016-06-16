#include <stdio.h>

typedef enum
{
    AA = 0,
    BB,
    CC,
    DD,
    EE
} MyEnume;

MyEnume format[] =
{
    AA,
    BB,
    EE,
    EE,
    EE,
    EE,
    EE,
    EE,
};

int main()
{
    printf("size of array: %d\n", sizeof(format)/sizeof(format[0]));  

}

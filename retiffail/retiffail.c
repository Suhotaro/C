#include <stdio.h>

#define RETURNIFFAILMSG(statement, ret, msg, ARG...)    \
if (!statement)    \
{    \
    printf("ERROR: " msg "\n", ##ARG);    \
    return ret;    \
} 

#define GOTOIFFAILMSG(statement, lable, msg, ARG...)    \
if (!statement)    \
{    \
   printf("ERROR: " msg "\n", ##ARG);    \
   goto lable;    \
}

void foo();

int main()
{
    printf("1\n");

    GOTOIFFAILMSG(1 == 1, err, "1 == 1", 1 , 1);

    printf("2\n");

    GOTOIFFAILMSG(1 == 0, err);

    printf("3\n");

err:
    printf("4\n");

    return 0;
}

void foo()
{
    printf("return void\n");

    return void(0);
}

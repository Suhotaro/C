#include <stdio.h>
#include <stdbool.h>

static bool foo(void)
{
    static bool init = false;

    if (init)
        return true;

    printf("init\n");

    init = true;

    return true;
}

int main()
{
    bool ret;


    ret = foo();
    ret = foo();
    ret = foo();

    return 0;
}

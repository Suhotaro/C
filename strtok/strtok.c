#include <stdio.h>
#include <string.h>

int main()
{
    char *a = "123/abc/456/def";
    char str[] = a;
    char *tmp = NULL;

    printf("tmp: %s\n", str);
    printf("tmp: %s\n", tmp);


    tmp = strtok(str, "/");
    while(tmp)
    {
        printf("tmp: %s\n", tmp);
        tmp = strtok(NULL, "/");
    }

    return 0;
}

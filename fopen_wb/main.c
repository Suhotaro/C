#include <stdio.h>

int main()
{
    const char *file = "./A/B/file";

    FILE *fp = fopen(file, "wb");
    if (fp == NULL)
    {
        printf("error open file\n");
        return 1;
    }

    printf("success open file\n");

    return 0;
}

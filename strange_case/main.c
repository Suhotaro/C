#include <stdio.h>
#include <stdlib.h>

static int counter;
struct pt
{
    int lc;
    int foo;
    int bar;
};

static
char example(struct pt *pt)
{
    switch(pt->lc) 
    {
        case 0:

        while(1)
        {
            pt->lc = 12;
        case 12:
            printf("Threshold reached\n");
          }
    }

    pt->lc = 0;
    return 2;
}


char example_2(struct pt *pt)
{
    int i = 0;

    switch(pt->lc) 
    { 
        case 0:

            for (i = 3; i < 5; i++)
            {

        case 12:
                printf("%d\n", i);   
            }   
    }
}

int main()
{
    counter = 0;
    int ret= 0;
    struct pt example_pt = {.lc = 12};

    ret = example_2(&example_pt);
    (void) ret;


    return 0;
}

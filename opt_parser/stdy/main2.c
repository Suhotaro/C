#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>


int main (int argc, char *argv[]){

    int flag_a = 0;
    int flag_b = 0;
    int flag_c = 0;

    const char* short_options = "abc";

    const struct option long_options[] = {
        {"opta",no_argument,&flag_a,1},
        {"optb",no_argument,&flag_b,10},
        {"optc",no_argument,&flag_c,-121},
        {NULL,0,NULL,0}
    };

    while (getopt_long(argc,argv,short_options,
        long_options,NULL)!=-1);

    printf("flag_a = %d\n",flag_a);
    printf("flag_b = %d\n",flag_b);
    printf("flag_c = %d\n",flag_c);
	printf("\n");
};

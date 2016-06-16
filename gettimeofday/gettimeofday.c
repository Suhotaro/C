#include <stdio.h>
#include <sys/time.h>


struct timeval start_time, end_time, res_time;

void time_start(void)
{
    gettimeofday(&start_time, NULL);
}

void time_stop(void)
{
    gettimeofday(&end_time, NULL);

    res_time.tv_sec = end_time.tv_sec - start_time.tv_sec;
    res_time.tv_usec = end_time.tv_usec - start_time.tv_usec;

    if( end_time.tv_usec - start_time.tv_usec < 0)
    {
        res_time.tv_sec--;
        res_time.tv_usec += 1000000;
    }

    printf("sec:%ld\n", res_time.tv_sec );
    printf("usec:%ld\n", res_time.tv_usec );
    printf("milisec:%ld\n", res_time.tv_sec*1000 + res_time.tv_usec/1000 );
}


int main()
{

    int i = 0;

    time_start();

    for(i = 0 ; i < 10000; i++)
        ;
    
    time_stop();

    return 0;
}

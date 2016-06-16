#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <unistd.h>


int main()
{
    int fd = open("a.txt", "r+");
    int fd2 = open("b.txt", "r+");

    struct rlimit *rlim = malloc(sizeof(struct rlimit));

    printf("OPEN_MAX:%d\n",FOPEN_MAX);


    if(getrlimit(RLIMIT_NOFILE, rlim))
    {
        printf("Fail");
        return 1;
    }

    printf("cur:%d max:%d\n", rlim->rlim_cur, rlim->rlim_max);

    close(fd);
    close(fd2); 

    return 0;
}

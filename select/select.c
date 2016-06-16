#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
    struct timeval timeout = { .tv_sec = 3, .tv_usec = 0 };
    fd_set fds;
    int ret;

	int fd = 0;

	fd = creat("a.txt", ACCESSPERMS);
	if (fd <= 0)
	{
	    printf("error open file\n");
	    exit(1);
	}

    while (1)
    {
    	FD_ZERO(&fds);
		FD_SET(0, &fds);
		FD_SET(fd, &fds);

        ret = select(fd + 1, &fds, NULL, NULL, &timeout);
        if (ret <= 0) {
            printf("select timed out or error (ret %d)\n", ret);
            continue;
        }  else if (FD_ISSET(0, &fds))
            break;


    	printf("read\n");

    }
    return 0;
}

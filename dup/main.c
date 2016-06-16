#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main ()
{   
	int fd, fd2, fd3, fd4;

	fd = open("a.txt", O_RDWR);
	if (fd < 0)
	{
		printf("Error open 1 file\n");
		exit(1);
	}

	printf("opened file with fd: %d\n\n", fd);


	fd2 = open("b.txt", O_RDWR);
	if (fd2 < 0)
	{
		printf("Error open 2 file\n");
		exit(1);
	}

	printf("opened file with fd: %d\n\n", fd2);

	fd3 = open("c.txt", O_RDWR);
	if (fd3 < 0)
	{
		printf("Error open 3 file\n");
		exit(1);
	}

	printf("opened file with fd: %d\n\n", fd3);

	close(fd);
	close(fd2);
	close(fd3);

	fd4 = open("d.txt", O_RDWR);
	if (fd4 < 0)
	{
		printf("Error open 4 file\n");
		exit(1);
	}

	printf("opened file with fd: %d\n\n", fd4);


    return 0;
}

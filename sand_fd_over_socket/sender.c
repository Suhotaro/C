#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>

ssize_t
sock_fd_write(int sock, void *buf, ssize_t buflen, int fd);

ssize_t
sock_fd_read(int sock, void *buf, ssize_t bufsize, int *fd);

void child(int sock)
{
	int fd;
	char buf[16];

	char buff[20];
	ssize_t size;

	sleep(1);
	for(;;)
	{
		size = sock_fd_read(sock, &buf, sizeof(buf), &fd);

		if (size <= 0)
			break;

		printf("read %d\n", size);

		if (fd != 1)
		{
			//write(fd, "hello world\n", 12);

			int s = 0;

			while( (s = read(fd, buff, sizeof(buff))) > 0)
			{
				int i = 0;
				for (i = 0 ; i < s; i++)
					printf("%c", buff[i]);

				memset(buf, 0, sizeof(buf));
			}
		}
		close(fd);
	}
}

void
parent (int sock, int fd)
{
	ssize_t size;
	int i;

	size = sock_fd_write(sock, "1", 1, fd);
	printf("wrote %d\n", size);
}

int main()
{
	int fd = 0;
	int sv[2];
	pid_t pid;
	
	ssize_t size;

	fd = open("file.txt", O_RDWR);
	if (fd <= 0)
	{
	    printf("error open file\n");
	    exit(1);
	}
	
	if (socketpair(AF_LOCAL, SOCK_STREAM, 0, sv) < 0)
	{
		printf("error open socket pair\n");
		exit(1);
	}

	switch ((pid = fork()))
	{
		case 0:
			close(sv[0]);

			child(sv[1]);

			break;

		case -1:
			perror("fork");
			exit(1);
			break;

		default:

			close(sv[1]);

			parent(sv[0], fd);

			break;
	}

		
    return 0;
}


ssize_t
sock_fd_write(int sock, void *buf, ssize_t buflen, int fd)
{
    ssize_t size;
    struct msghdr msg;
    struct iovec iov;
    union {
        struct cmsghdr  cmsghdr;
        char        control[CMSG_SPACE(sizeof (int))];
    } cmsgu;

    struct cmsghdr *cmsg;

    iov.iov_base = buf;
    iov.iov_len = buflen;

    msg.msg_name = NULL;
    msg.msg_namelen = 0;
    msg.msg_iov = &iov;
    msg.msg_iovlen = 1;

    if (fd != -1) {
        msg.msg_control = cmsgu.control;
        msg.msg_controllen = sizeof(cmsgu.control);

        cmsg = CMSG_FIRSTHDR(&msg);
        cmsg->cmsg_len = CMSG_LEN(sizeof (int));
        cmsg->cmsg_level = SOL_SOCKET;
        cmsg->cmsg_type = SCM_RIGHTS;

        printf ("passing fd %d\n", fd);
        *((int *) CMSG_DATA(cmsg)) = fd;
    } else {
        msg.msg_control = NULL;
        msg.msg_controllen = 0;
        printf ("not passing fd\n");
    }

    size = sendmsg(sock, &msg, 0);

    if (size < 0)
        perror ("sendmsg");
    return size;
}


ssize_t
sock_fd_read(int sock, void *buf, ssize_t bufsize, int *fd)
{
    ssize_t     size;

    if (fd) {
        struct msghdr   msg;
        struct iovec    iov;
        union {
            struct cmsghdr  cmsghdr;
            char        control[CMSG_SPACE(sizeof (int))];
        } cmsgu;
        struct cmsghdr  *cmsg;

        iov.iov_base = buf;
        iov.iov_len = bufsize;

        msg.msg_name = NULL;
        msg.msg_namelen = 0;
        msg.msg_iov = &iov;
        msg.msg_iovlen = 1;
        msg.msg_control = cmsgu.control;
        msg.msg_controllen = sizeof(cmsgu.control);
        size = recvmsg (sock, &msg, 0);
        if (size < 0) {
            perror ("recvmsg");
            exit(1);
        }
        cmsg = CMSG_FIRSTHDR(&msg);
        if (cmsg && cmsg->cmsg_len == CMSG_LEN(sizeof(int))) {
            if (cmsg->cmsg_level != SOL_SOCKET) {
                fprintf (stderr, "invalid cmsg_level %d\n",
                     cmsg->cmsg_level);
                exit(1);
            }
            if (cmsg->cmsg_type != SCM_RIGHTS) {
                fprintf (stderr, "invalid cmsg_type %d\n",
                     cmsg->cmsg_type);
                exit(1);
            }

            *fd = *((int *) CMSG_DATA(cmsg));
            printf ("received fd %d\n", *fd);
        } else
            *fd = -1;
    } else {
        size = read (sock, buf, bufsize);
        if (size < 0) {
            perror("read");
            exit(1);
        }
    }
    return size;
}

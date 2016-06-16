#include <stdio.h>

#define HALLO()           \
do                        \
{                         \
     printf("Hello\n");     \
}                         \
while(0)                  \


int main()
{
	HALLO();

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 1;
	int *b = calloc(1, sizeof( int  ) );
	*b = 2;

	printf("%d %p\n%d %p\n", a, &a, *b, b);


	return 0;
}










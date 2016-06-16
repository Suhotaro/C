#include <stdio.h>
#include <stdlib.h>

union Some {
    int i;
    double d;
};

union Some2 {
    int i;
    char c;
};

union Some3
{
	int p;
	int *ptr;
};


void show( int *t )
{
    int *p = *t;
    printf("show: %d \n", p[2]); 
}

int main()
{
/*----------------------------------------------------*/
	union Some a;
	a.i = 5;
	printf("Some: f a.i=%d  a.d=%f\n", a.i, a.d);

	a.d = 5.5;	
	printf("Some: d a.f=%f  a.i=%d\n", a.d, a.i);
	printf("\n");

/*----------------------------------------------------*/

    union Some2 c;
    c.c = 5;
    char* q = &c.c;
	printf("Some: d c.c=%d  c.i=%d\n", c.c, c.i);
    
    char x = 11;
	printf("nums 1: %d %d %d m:%d %d %d %d \n", *(q - 3),*(q - 2),*(q - 1),*q, *(q + 1), *(q + 2), *(q + 3) );

    c.i = 5;
    q = &c.c;
	printf("Some: d c.c=%d  c.i=%d\n", c.c, c.i);

    int z = 2222222222;
	printf("nums 2: %d %d %d m:%d %d %d %d \n", *(q - 3),*(q - 2),*(q - 1),*q, *(q + 1), *(q + 2), *(q + 3) );

	printf("\n");

/*----------------------------------------------------*/
	int *ptr = calloc(5, sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
		ptr[i] = i + 1;

	for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    printf("\n");

    union Some3 b;
    b.ptr = ptr;

    printf("ptrs: %p %p \n", b.ptr, ptr);
    printf("ptrs data: %d %d \n", b.ptr[2], ptr[2]);
    printf("ptrs union: %p %d \n", b.ptr, b.p);

    int *p = b.p;
    int *t = b.ptr;
    printf("test: %d %d\n", p[2], t[2]);

	printf("\n");
/*----------------------------------------------------*/

    show(&b.p);

/*----------------------------------------------------*/
















	return 0;
}

#include <stdio.h>
#include <string.h>

void reverse(char *str) {
	int i, j;
	int size = strlen(str);
	for (i = 0, j = size-1; i <= j; i++, j--)
	{
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

int main()
{
	char *name = strdup("abcdefg");
	printf("1: %s\n", name);
	reverse(name);
	printf("2: %s\n", name);

	char *name2 = strdup("abcdefgh");
	printf("1: %s\n", name2);
	reverse(name2);
	printf("2: %s\n", name2);

    return 0;
}

#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	printf("%s%s\n", dest, src);
}

int main(void)
{
	char d[] = "Hello ";
	char s[] = "World\n";
	char *ptr;

	ptr = _strcat(d, s);
	
	return (0);
}

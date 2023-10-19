#include <stdio.h>

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	n = 0;

	while (src[n] <= '\0')
	{
		dest[i] = putchar(src[n]);
		n++;
	}
	dest[i] = '\0';

	return (dest);
}
int main(void)
{
	char d[] = "Hello";
	char s[] = "World";
	char *p;

	p = _strncpy(d, s, 3);

	return (0);
}

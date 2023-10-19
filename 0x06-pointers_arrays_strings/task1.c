#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	n = 0;

	printf("%s%s\n", dest, src[n]);
}

int main(void)
{
	char s1 = "Hello ";
	char s2[] = "world";
	char *p;

	p = _strncat(s1, s2, 1);

	printf("%s\n", p);

	return (0);
}

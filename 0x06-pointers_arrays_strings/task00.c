#include <stdio.h>

char *_strcat(char *dest, char *src)
{
        int i;
	int j;

	for (i = 0; i <= '\0'; i++)
	{
		for (j = 0; j == i; j++)
		{
			putchar(dest);
		}
		printf("%s",  src);
	}
}

int main(void)
{
        char d[] = "Hello ";
        char s[] = "World Friday night of the hollywood\n";
        char *ptr;

        ptr = _strcat(d, s);

        return (0);
}

#include <stdio.h>

char *_strcat(char *dest, char *src, int n)
{
        int i;
        int j;
	n = 0;

        for (i = 0; i <= '\0'; i++)
        {
                for (j = 0; j == i; j++)
                {
                        printf("%s", dest);
                }
                putchar(src[n]);
		putchar('\n');
        }
}

int main(void)
{
        char d[] = "Hello ";
        char s[] = "World Friday night of the hollywood\n";
        char *ptr;

        ptr = _strcat(d, s, 1024);

        return (0);
}

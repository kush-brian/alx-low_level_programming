#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define password_length 10

int main(void)
{
	char password[password_length + 1];
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_length = sizeof(charset) - 1;
	int i;

	srand(time(NULL));

	for (i = 0; i < password_length; i++)
	{
		int random_index = rand() % charset_length;
		password[i] = charset[random_index];
	}

	password[password_length] = '\0';

	printf("%s\n", password);
	return (0);
}

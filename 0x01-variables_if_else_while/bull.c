#include <stdio.h>

int main() 
{
    for (int i = 0; i <= 99; i++) 
    {
        for (int j = i; j <= 99; j++) 
	{
            // Print the first number (i)
            putchar('0' + (i / 10));
            putchar('0' + (i % 10));

            // Print a space between numbers
            putchar(' ');

            // Print the second number (j)
            putchar('0' + (j / 10));
            putchar('0' + (j % 10));

            // Check if it's the last combination
            if (i != 99 || j != 99) 
	    {
                // Print a comma and a space
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n'); // Print a newline character

    return 0;
}


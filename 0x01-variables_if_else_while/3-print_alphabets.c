#include <stdio.h>

/**
 * main - this is a main function
 *
 * while loop - statement to print alphabets a-z,A-Z using putchar & ends a \n
 *
 * Return: always returns 0, to terminate main function
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - this is the main function
 *
 * function - putchar was used to print vatiable
 *
 * Return: always returns 0 to terminate main function
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}

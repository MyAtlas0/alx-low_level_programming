#include <stdio.h>

/**
 * main - this is the main function
 *
 * function - putchar is used for printing of lowercase alphabets in reverse
 *
 * Return: always returns 0, to terminate main function
 */

int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase--);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - this is the main function
 *
 * while loop - variable in the loop is incremented within the putchar function
 *
 * Return: always returns 0 to terminate main function
 */

int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit++);
	}

	putchar('\n');
	return (0);
}

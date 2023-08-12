#include <stdio.h>

/**
 * main - this is the main function
 *
 * while loop - uses putchar to print all single digits of base 10, from 0
 *
 * Return: always returns 0, to terminate main function
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit++);
	}

	putchar('\n');
	return (0);
}

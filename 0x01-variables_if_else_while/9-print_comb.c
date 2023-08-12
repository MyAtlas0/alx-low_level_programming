#include <stdio.h>

/**
 * main - this is the main function
 *
 * for loop - uses if statement to determine when to print comma & space
 *
 * Return: always returns 0, to terminate the main function
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

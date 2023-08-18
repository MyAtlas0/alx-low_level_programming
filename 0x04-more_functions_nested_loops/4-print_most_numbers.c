#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prototype function for void
 *
 * condition - used an if statement to skip 2 and 4 when executing for loop
 *
 * Return: Always returns 0, to terminate function
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}

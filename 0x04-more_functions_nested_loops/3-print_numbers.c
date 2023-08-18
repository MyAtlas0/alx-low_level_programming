#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prototype function for void
 *
 * condition - used a for loop for increaments from 0-9
 *
 * Return: returns 0, to terminate function
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}

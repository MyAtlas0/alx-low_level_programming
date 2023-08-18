#include "main.h"
#include <stdio.h>

/**
 * print_line - prototype function for int n
 *
 * loop condition - for loop to print line '_' and prints '\n' if <= 0
 *
 * @n: variable used to represent int
 *
 * Return: returns 0, to terminate function
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prototype function for int n
 *
 * @n: positive function variable with
 *
 * loop condition - prints diagonal line of \ followed by '\n'
 *
 * Return: returns 0; to terminate function
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_square - prototype function for int size
 *
 * nested for_loop - condition used to print '#' and prints '\n' if size <= 0
 *
 * @size: positive integer to print output
 *
 * Return: returns 0, to terminate function
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
}

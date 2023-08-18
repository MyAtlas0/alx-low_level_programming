#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prototype function for int size
 *
 * @size: variable used to declare int
 *
 * nexted for_loop - condition to print # characters followed by '\n'
 *
 * Return: returns 0, to terminate function
 */

void print_triangle(int size)
{
	int h, e, y;

	for (h = 1; h <= size; h++)
	{
		for (e = 0; e < size - h; e++)
		{
			_putchar(' ');
		}

		for (y = 0; y < h; y++)
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

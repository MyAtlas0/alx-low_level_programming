#include "main.h"
#include <stdio.h>

/**
 * print_number - prototype function for int
 *
 * condition statement - handles nagative numbers when printing integers
 *
 * @n: variable used to declear division
 *
 * Return: returns value to terminate function
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = 1;
	while (n / i >= 10)
	{
		i *= 10;
	}

	while (i > 0)
	{
		_putchar((n / i) % 10 + '0');
		i /= 10;
	}
}

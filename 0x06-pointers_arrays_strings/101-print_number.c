#include "main.h"

/**
 * print_number - function that prints integars
 *
 * condition - solves n = 0, then n < 0, before converting to sting
 *
 * @n: declares integer to be printed using _putchar
 *
 * Return: returns void, to terminate function
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

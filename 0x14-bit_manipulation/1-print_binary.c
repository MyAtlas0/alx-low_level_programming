#include "main.h"

/**
 * print_binary - Function that prints the binary represenntation of a value.
 *
 * Condition - Used an if statement to check if n is '0' or '1',
 *		and returns it after printing, whereas if n not '0' the function
 *		right right shifts n by 1 bit before making a recursive call to itself
 *		with the shifted value.
 *
 * @n: Represents variable for value to be converted.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}

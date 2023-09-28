#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 *
 * Condition - uses an if statement to check if n is 0,
 *		and returns after printing. whereas if n is not 0,
 *		the function right shifts n by 1 bit before making a,
 *		recursive call to print_binary with the shifted value.
 *
 * @n: Varaiable for number to be converted to binary.
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
		_putchar ('1');
		return;
	}
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}

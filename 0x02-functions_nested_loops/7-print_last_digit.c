#include "main.h"

/**
 * print_last_digit - fuction prototpye for int n
 *
 * @n: calulates the value of n % 10 to print last digit
 *
 * Return: returns value the value of last_digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

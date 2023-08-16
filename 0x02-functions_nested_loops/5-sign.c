#include "main.h"

/**
 * print_sign - function prototype for int n
 *
 * if else statement - condition used to declear if n '+', '0', or '-'
 *
 * @n: number to be printed using _putchar
 *
 * Return: return 1 if '+', 0 if '0', or -1 if '-'
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

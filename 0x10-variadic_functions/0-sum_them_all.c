#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prototype function that sums a number of integars
 *
 * condition - checks if n, before iterating the loop to checks each
 *		integar argument from va_list to calculate sum variables
 *
 * @n: variable specifying the number of arguments.
 *
 * Return: The sum of the integer arguments, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i, value;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	if (args == 0)
	{
		return (0);
	}

	sum = 0;
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum = sum + value;
	}
	va_end(args);
	return (sum);
}

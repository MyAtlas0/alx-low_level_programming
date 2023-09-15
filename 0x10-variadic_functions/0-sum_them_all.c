#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * sum_them_all - prototype function that returns sum of parameters
 *
 * Condition - checks if n is 0,before iterating the loop to checks each
 *		integar argument from va_list to calculate its sum of intergar
 *		arguments
 *
 * @n: variable specifying the number of arguments
 *
 * @...: represents the integer arguments to be summed.
 *
 * Return: returns 0 if n == 0, otherwise sum of integars arguments
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
	if (args == NULL)
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

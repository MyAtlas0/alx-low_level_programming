#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to print strings separated by given seperator
 *
 * @separator: variable representing string to pass between strings
 *
 * @n: represents number of string arguments
 *
 * @...: variable for the string arguments to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}

	if (args == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}

		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

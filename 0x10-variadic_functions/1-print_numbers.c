#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prototype function that prints numbers
 *
 * @separator: variable representing string to pass between numbers
 *
 * @n: represents number of integar arguments
 *
 * @...: variable for the  number of integar arguments to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
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
		value = va_arg(args, int);
		printf("%d", value);

		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prototype function that prints anything
 *
 * condition - first iterates through the format string and maps each format
 *		"c,i,f,s" to its corresponding print function
 *
 * @format: the format string representing the data types
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *separator = "";
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
				}
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

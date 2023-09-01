#include "main.h"

/**
 * _puts - prototype function that takes a point to a sting as its agument
 *
 * while loop condition - used to iterate through characters != Null
 *
 * @str: string variable to increase pointer to next character
 *
 * Return: prints '\n' before terminating function
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

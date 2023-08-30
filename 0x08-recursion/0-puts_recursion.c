#include "main.h"

/**
 * _puts_recursion - prototype function to print a string
 *
 * if_condition - used as base case, function calls itself until '\0' then '\n'
 *
 * @s: variable for pointer to string
 *
 * Return: returns nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

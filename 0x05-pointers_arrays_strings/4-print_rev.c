#include "main.h"

/**
 * print_rev - prototype function to print reverse function of the string
 *
 * @s: used to define characters in the array
 *
 * for_loop condition - prints strings characters and reverse it afterwards
 *
 * Return: rprint '\n', before terminating function
 */

void print_rev(char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		count++;
	}
	for (n = count - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prototype function for 'char *str' pointer
 *
 * @str: variable to print string characters in an array
 *
 * loop condition - prints all even characters in the string using %
 *
 * Return: prints '\n' then terminates function
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}

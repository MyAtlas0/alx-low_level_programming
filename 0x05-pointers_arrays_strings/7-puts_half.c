#include "main.h"

/**
 * puts_half - prototype function to call pointer characters of 'char *str'
 *
 * loop condition - used to prints second half of string characters
 *
 * @str: variable to print values in an array of characters
 *
 * Return: prints '\n' before terminating function
 */

void puts_half(char *str)
{
	int n;
	int temp;
	int count = 0;

	for (n = 0; str[n] != '\0'; n++)
	{
		count++;
	}
	temp = (count - 1) / 2;
	for (n = temp + 1; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

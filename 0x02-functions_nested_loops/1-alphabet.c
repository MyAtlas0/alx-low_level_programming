#include "main.h"

/**
 * print_alphabet - function prototype to print lowercase alphabet
 *
 * for loop - condition to print lowercase 'a' to 'z' using _putchar
 *
 * Return: always returns 0, to terminate print_alphabet function
 */

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet_x10 - function prototype for print_alphabet_x10
 *
 * nested for_loop - condition to print 10 variations of lowercase 'a' to 'z'
 *
 * Return: always returns 0, to terminate print_alphabet_x10
 */

void print_alphabet_x10(void)
{
	int multiple;
	char lowercase;

	for (multiple = 0; multiple < 10; multiple++)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}
		_putchar('\n');
	}
}

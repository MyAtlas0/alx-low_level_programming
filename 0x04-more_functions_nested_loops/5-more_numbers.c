#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prototype function for void
 *
 * condition _ if statement used to allow printing 10 - 14 with the / and %
 *
 * Return: always returns 0, to terminate function
 */

void more_numbers(void)
{
	int n;
	int n_num;

	for (n = 0; n < 10; n++)
	{
		for (n_num = 0; n_num <= 14; n_num++)
		{
			if (n_num > 9)
			{
				_putchar(n_num / 10 + '0');
			}
			_putchar(n_num % 10 + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * jack_bauer - function prototype for void
 *
 * nested for_loop - condition prints every minute and hour (00:00 to 23:59)
 *
 * Return: returns 0, to terminate jack_bauer function
 */

void jack_bauer(void)
{
	int minutes, hours;

	for (minutes = 0; minutes < 60; minutes++)
	{
		for (hours = 0; hours < 24; hours++)
		{
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar(':');
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');

			_putchar('\n');
		}
	}
}

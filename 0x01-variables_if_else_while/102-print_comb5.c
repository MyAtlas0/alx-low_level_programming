#include <stdio.h>

/**
 * main - this is the main function
 *
 * for_loop - generates 2 set of combos, with if statement to compare variables
 *
 * Return: always returns 0, to terminate main function
 */

int main(void)
{
	int combo_1;
	int combo_2;

	for (combo_1 = 0; combo_1 < 99; combo_1++)
	{
		for (combo_2 = combo_1 + 1; combo_2 <= 99; combo_2++)
		{
			putchar(combo_1 / 10 + '0');
			putchar(combo_1 % 10 + '0');
			putchar(' ');
			putchar(combo_2 / 10 + '0');
			putchar(combo_2 % 10 + '0');

			if (combo_1 != 98 || combo_2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

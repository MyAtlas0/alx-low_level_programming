#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prototype for int n
 * @n: decleared variable as number to be printed
 * if_else statement - condition to print all natural numbers from n to 98
 */

void print_to_98(int n)
{
	int n_num;

	if (n >= 0 && n <= 98)
	{
		for (n_num = n; n_num <= 98; n_num++)
		{
			printf("%d", n_num);
			if (n_num != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (n_num = n; n_num <= 98; n_num++)
		{
			printf("%d", n_num);
			if (n_num != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (n_num = n; n_num >= 98; n_num--)
		{
			printf("%d", n_num);
			if (n_num != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	printf("\n");
}

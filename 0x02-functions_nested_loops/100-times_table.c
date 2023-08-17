#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function prototype for void
 *
 * @n: integer used to declare variable int n
 *
 * nested for_loop: using if statements to align time_table
 */

void print_times_table(int n)
{
	int rows, colums;
	int result;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (colums = 0; colums <= n; colums++)
			{
				result = rows * colums;
				if (colums == 0)
				{
					printf("%d, ", result);
				}
				else
				{
					printf("%3d", result);
					if (colums != n)
					{
						printf(", ");
					}
				}
			}
			printf("\n");
		}
	}
}

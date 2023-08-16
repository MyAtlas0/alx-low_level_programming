#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * times_table - function prototype for void
 *
 * nested for_loop: using if statement to align the table followed by a \n
 *
 * Return: returns void , to time_table function and terminates it
 *
 */

void times_table(void)
{
	int rows, colums;
	int results;

	for (rows = 0; rows <= 9; rows++)
	{
		for (colums = 0; colums <= 9; colums++)
		{
			results = rows * colums;
			if (colums == 0)
			{
				printf("%d, ", results);
			}
			else
			{
				printf("%2d", results);
				if (colums != 9)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}

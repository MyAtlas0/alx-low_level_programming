#include "main.h"
#include <stdio.h>

/**
 * main - this is the main fuction
 *
 * syntax - an if...else statement was used
 *
 * Return: always returns 0 to terminate main function
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

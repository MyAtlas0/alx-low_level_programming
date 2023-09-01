#include <stdio.h>
#include "main.h"

/**
 * _abs - function prototype for int
 *
 * if_else statement - negates r if valuse is negative else remains the same
 *
 * @r: used to represent the absolute value of an integer
 *
 * Return: returns -r if negative and r positive
 */

int _abs(int r)
{

	if (r < 0)
	{
		return (-r);
	}
	else if (r >= 0)
	{
		return (r);
	}
	_putchar('\n');
	return (0);
}

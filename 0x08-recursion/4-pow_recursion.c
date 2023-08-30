#include "main.h"

/**
 * _pow_recursion - prototype function to return value of x raised to y
 *
 * if_else condition - base_case to return value of x power y
 *
 * @x: variable for base number to carry y
 *
 * @y: variable of power of x
 *
 * Return: returns 0, to terminate function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}

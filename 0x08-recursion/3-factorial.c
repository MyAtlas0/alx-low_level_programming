#include "main.h"

/**
 * factorial - prototype fuction that returns fact of number
 *
 * if_else condition - the if else is the base_case for the fact
 *
 * @n: the argument of function
 *
 * Return: recursive case
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

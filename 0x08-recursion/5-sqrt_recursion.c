#include "main.h"

/**
 * _sqrt - helper function for prototype to find square root of n
 *
 * if_else condition - from base_case, then checks if square > or = n
 *
 * @n: variable for number to find sqare root
 *
 * @find: variable for current number found to find sqare root
 *
 * Return: returns sqare root of n, or -1 if not natural
 */

int _sqrt(int n, int find)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (find * find > n)
	{
		return (-1);
	}
	else if (find * find == n)
	{
		return (find);
	}
	return (_sqrt(n, find + 1));
}

/**
 * _sqrt_recursion - prototype function to find the sqare root of n
 *
 * @n: variable for number to find sqare root
 *
 * Return: sqare root of n, by calling helper that initially finds 1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

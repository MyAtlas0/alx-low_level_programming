#include "main.h"

/**
 * is_prime - helper for prototype function
 *
 * if_else condition - uses to check if integers that are prime numbers or not
 *
 * @n: variable of integers to be checked
 *
 * @div: variable for integer that multiplies itself to get n
 *
 * Return: returns 1 if prime and 0 if not
 */

int is_prime(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (div * div > n)
	{
		return (1);
	}
	else if (n % div == 0)
	{
		return (0);
	}
	return (is_prime(n, (div + 1)));
}


/**
 * is_prime_number - prototype function to check prime numbers in integers
 *
 * @n: variable of integers to be checked
 *
 * Return: returns function tests before printing results
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

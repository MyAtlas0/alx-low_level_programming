#include <stdio.h>

/**
 * main - main function for void
 *
 * while condition - calculate and prints largest prime factor of 612852475143
 *
 * Return: always returns 0, to terminate function
 */

int main(void)
{
	long n = 612852475143;
	long largest_p_factor = 2;

	while (n > 1)
	{
		if (n % largest_p_factor == 0)
		{
			n /= largest_p_factor;
		}
		else
		{
			largest_p_factor++;
		}
	}

	printf("%ld\n", largest_p_factor);
	return (0);
}

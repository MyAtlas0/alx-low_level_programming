#include <stdio.h>

/**
 * main - this is the main function
 *
 * loop statement - for_loop used to print fib_1, fib_2 and its sum
 *
 * Return: always returns 0, to terminate main function
 */

int main(void)
{
	int n = 98;
	int i;
	unsigned long int fib_1 = 1, fib_2 = 2;
	unsigned long int sum;

	printf("%lu, ", fib_1);
	for (i = 1; i < n; i++)
	{
		printf("%lu", fib_2);
		sum = fib_1 + fib_2;

		fib_1 = fib_2;
		fib_2 = sum;

		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

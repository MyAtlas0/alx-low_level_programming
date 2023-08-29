#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always resturns 0, to terminate main
 */

int main(void)
{
	int max = 4000000;
	int fib_1 = 0, fib_2 = 1;
	int i;
	int sum;

	while (i <= max)
	{
		i = fib_1 + fib_2;
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
		fib_1 = fib_2;
		fib_2 = i;
	}
	printf("%d\n", sum);
	return (0);
}

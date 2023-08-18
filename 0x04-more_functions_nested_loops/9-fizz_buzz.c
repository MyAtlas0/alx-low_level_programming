#include <stdio.h>

/**
 * main - main function for void
 *
 * condition - prints fizzbuzz if multiple of 3&5, fizz if 3, buzz if 5, else n
 *
 *
 * Return: Always returns 0, to terminate function
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("Fizzbuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}

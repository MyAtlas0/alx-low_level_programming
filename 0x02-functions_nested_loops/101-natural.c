#include <stdio.h>

/**
 * main - this is the main function
 *
 * for_loop -  checks the multiple of 3 or 5 using % thru 1-1023
 *
 * Return: always reterns 0, to terminate main function
 */

int main(void)
{
	int sum = 0;
	int n;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}

	printf("%d\n", sum);
	return (0);
}

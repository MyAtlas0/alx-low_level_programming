#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - this is the main funtion the program
 *
 * declaration - the code n % 10, to print the number and last digit
 *
 * Return: always returns 0 to terminate the main function
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	printf("Last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

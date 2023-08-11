#include <stdio.h>

/**
 * main - this is a main fuction
 *
 * printf - used to print size of char, int, long int, long long int, and float
 *
 * Return: always 0, and used to terminate main fuction of a program
 */

int main(void)
{
	char c;
	int i;
	long int I;
	long long int L;
	float f;

	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s).\n", (unsigned long)sizeof(I));
	printf("Size of a long long int: %lu byte(s).\n", (unsigned long)sizeof(L));
	printf("Size of a float: %lu byte(s).\n", (unsigned long)sizeof(f));
	return (0);
}

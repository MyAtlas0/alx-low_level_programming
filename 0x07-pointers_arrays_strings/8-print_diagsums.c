#include "main.h"

/**
 * print_diagsums - prototype function to print sum of 2 int
 *
 * @a: variable for pointer at beginning of matrix
 *
 * @size: variable for matrix size
 *
 * Return: returns nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int m = 0;
	int s = 0;

	for (i = 0; i < size; i++)
	{
		m = m + a[i * size + i];
		s = s + a[i * size + (size - 1 - i)];
	}
	printf("%d, ", m);
	printf("%d\n", s);
}

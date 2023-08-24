#include "main.h"

/**
 * reverse_array - prototype function to reverse content of array
 *
 * @a: variable to declare elements of the array
 *
 * @n: varaiable to declare array name
 *
 * Return: returns 0; to terminate function
 */

void reverse_array(int *a, int n)
{
	int i;
	int swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
}

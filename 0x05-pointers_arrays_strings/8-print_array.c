#include "main.h"
#include <stdio.h>

/**
 * print_array - prototype function to call array
 *
 * condition - print the n number of characters in the array
 *
 * @n: variable used to declare elements from function
 *
 * @a: variable used to store elements in an array
 *
 * Return: prints '\n' before terminating function
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

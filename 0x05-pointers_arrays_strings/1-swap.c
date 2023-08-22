#include "main.h"

/**
 * swap_int - prototype function to swap value for *a and *b
 *
 * @a: variable to declare value of pointer a in swap_int
 *
 * @b: variable to declare value of pointer b in swap_int
 *
 * Return: returns null, to terminate function
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

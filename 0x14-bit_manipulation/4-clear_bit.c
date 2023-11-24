#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0.
 *
 * @n: Represents the ponter to an unsigned long int.
 *
 * @index: Represents variable for the bit index.
 *
 * Return: 1 if it worked, -1 if not..
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index > sizeof(unsigned long int) * (8 - 1))
	{
		return (-1);
	}

	clear = 1UL << index;
	if (*n & clear)
	{
		*n ^= clear;
	}
	return (1);
}

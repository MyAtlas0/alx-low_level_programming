#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0.
 *
 * @n: Represents a pointer to an unsigned long int.
 *
 * @index: Variable for a bit index.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	mask = 1UL << index;
	if (*n & mask)
	{
		*n ^= mask;
	}
	return (1);
}


#include "main.h"

/**
 * set_bit - Function to set value of a bit to 1 at a given index.
 *
 * @n: Represents a pointer to an unsigned long int.
 *
 * @index: Variable for a bit index.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}

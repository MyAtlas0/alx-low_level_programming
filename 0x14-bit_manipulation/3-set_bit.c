#include "main.h"

/**
 * set_bit - Functin to set value of a  bit to 1 at a given index.
 *
 * @n: Represents the pointer to an unsigned long int.
 *
 * @index: Represents variable for the bit index.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > sizeof(unsigned long int) * (8 - 1))
	{
		return (-1);
	}
	set = 1UL << index;
	*n = *n | set;

	return (1);
}

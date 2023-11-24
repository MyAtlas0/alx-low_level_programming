#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 *
 * @n: Represents the value for unsigned long int.
 *
 * @index: Represents variable for bit index.
 *
 * Return: The value of the bits or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	while (bit <= index)
	{
		if (bit == index)
		{
			return ((n >> bit) & 1);
		}
		bit++;
	}
	return (-1);
}

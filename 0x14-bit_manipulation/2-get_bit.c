#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 *
 * @n: Represents input values for unsigned long int.
 *
 * @index: Variable for bit index.
 *
 * Return: The value of the bits or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	while (i <= index)
	{
		if (i == index)
		{
			return ((n >> i) & 1);
		}
		i++;
	}
	return (-1);
}

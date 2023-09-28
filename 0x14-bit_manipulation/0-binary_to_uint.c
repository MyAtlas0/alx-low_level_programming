#include "main.h"

/**
 * binary_to_uint - Function to convert binary number to an unsigned int.
 *
 * @b: Represents the values of input strings.
 *
 * Return: The converted number, or 0 if string not 1 or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		binary = (binary << 1) | (*b - '0');
		b++;
	}
	return (binary);
}


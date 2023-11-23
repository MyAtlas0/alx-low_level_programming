#include "main.h"

/**
 * binary_to_uint - Function to convert binary number to an unsigned int.
 *
 * @b: Representing the String value.
 *
 * Return: The converted binary number, or 0 if null or not 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_num = 0;

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
		binary_num = (binary_num << 1) | (*b - '0');
		b++;
	}
	return (binary_num);
}

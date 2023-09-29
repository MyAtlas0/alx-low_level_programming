#include "main.h"

/**
 * get_endianness - Function that checks if a machine is big endian or little.
 *
 * Return: 1 if little endian, else 0 if big endian.
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian;

	endian = (char *)&test;
	if (*endian == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


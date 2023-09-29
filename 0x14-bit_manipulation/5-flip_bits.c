#include "main.h"


/**
 * flip_bits - Function to count the number of bits to change into another.
 *
 * @n: Represents the first value.
 *
 * @m: Represents the second value to be changed with.
 *
 * Return: The number of changed bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	xor_result = n ^ m;
	while (xor_result > 0)
	{
		if (xor_result & 1)
		{
			count++;
		}
		xor_result >>= 1;
	}
	return (count);
}

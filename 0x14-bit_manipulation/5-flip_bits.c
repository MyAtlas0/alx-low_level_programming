#include "main.h"

/**
 * flip_bits - Functions that returns number of bits to flip to get another.
 *
 * @n: Represents the number.
 *
 * @m: Represents the flipped number.
 *
 * Return: The number of bits when flipping n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor >>= 1;
	}
	return (bits);
}

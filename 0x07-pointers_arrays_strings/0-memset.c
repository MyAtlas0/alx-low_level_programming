#include "main.h"

/**
 * *_memset - prototype function for (char *s, char b, unsigned int n)
 *
 * loop condition - compares variables m ,n before printing increaments
 *
 * @s: pointer variable
 * @b: variable for constant bytes to be filled in the memory
 * @n: variable for bytes of memory
 *
 * Return: returns *s, terminates function
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}

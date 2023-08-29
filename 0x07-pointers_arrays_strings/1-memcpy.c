#include "main.h"

/**
 * *_memcpy - prototype function to copy memory area
 *
 * loop condition - compares variable n and m before increatment
 *
 * @dest: pointer variable to destination of copied memory
 *
 * @src: pointer variable of source memory
 *
 * @n: variable for bytes to copy
 *
 * Return: returns pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}

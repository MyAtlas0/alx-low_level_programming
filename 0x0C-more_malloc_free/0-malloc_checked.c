#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Prototype function to allocate memmory using malloc
 *
 * condition - checked if malloc successful but terminate with 98 if failed
 *
 * @b: variable representing the number of allocated bytes
 *
 * Return: returns result to allocate memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *result;

	result = malloc(b);
	if (result == NULL)
	{
		exit(98);
	}
	else
	{
		return (result);
	}
}

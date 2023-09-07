#include "main.h"
#include <string.h>

/**
 * _calloc - prototpye function to allocate memmory for an array using malloc
 *
 * condition - checks required Grid_size required to store array, before;
 *		allocating memory to an array if initialized to 0 using memset
 *
 * @nmemb: variable representing number of elements currently in the array
 *
 * @size: variable for size of each byte of element
 *
 * Return: returns result of the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *result;
	unsigned int grid_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	grid_size = nmemb * size;

	result = malloc(grid_size);
	if (result == NULL)
	{
		return (NULL);
	}
	memset(result, 0, grid_size);
	return (result);
}

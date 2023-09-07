#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - prototype function for memory relocation using mollac and free
 *
 * if_else condition - checks if new_size is zero and ptr is not full, then;
 *			using free it returns NULL, and if new_size = old_size;
 *			returns ptr, without memory allocation, before coping;
 *			elements to new sting using memcpy
 *
 * @ptr: variable representing the previously allocated memory
 *
 * @old_size: variable for old byte size
 *
 * @new_size: variable for new byte size
 *
 * Return: returns the pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}

	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_size < old_size)
	{
		memcpy(new_ptr, ptr, new_size);
	}
	else
	{
		memcpy(new_ptr, ptr, old_size);
	}
	free(ptr);
	return (new_ptr);
}

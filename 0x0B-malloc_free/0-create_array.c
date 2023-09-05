#include "main.h"

/**
 * create_array - prototype function to create an array of chars
 *
 * condition - if size is 0, it returns NULL before allocating memory
 *
 * @size: variable to declare size of array
 *
 * @c: variable to declare character to initialize with array
 *
 * Return: returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

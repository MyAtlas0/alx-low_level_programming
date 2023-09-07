#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - prototype function that creates an array of integers
 *
 * condition - checks if min > max, before  calculating array size;
 *		then, allocates to the array using mollac, and during this;
 *		if allocation failed, returns NULL, else initialises array
 *
 * @min: variable for the maximum value included in the array
 *
 * @max: variable for the maximun value included in the array
 *
 * Return: returns pointer to the result
 */

int *array_range(int min, int max)
{
	int *result;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		result[i] = min++;
	}
	return (result);
}

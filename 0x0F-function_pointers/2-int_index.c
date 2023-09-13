#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - prototype function that searches for an integar
 *
 * condition - first checks for NULL to return -1, then iterates through array
 *		and calls 'cmp' for each element, then returns index of element
 *		once condition satisfied
 *
 * @array: varaiabe for array to search
 *
 * @size: variable for number of elements in the array
 *
 * @cmp: variable for pointer pointing to function that checks a condition
 *
 * Return: Returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

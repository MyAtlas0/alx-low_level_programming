#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prototype function to iterate function element of an array
 *
 * condition - for_loop to iterate elements of the array
 *
 * @size: variable for the number of elements in the array to iterate
 *
 * @array: variable pointing to the first element in the array
 *
 * @action: variable representing the pointer to a function
 *
 * Return: retruns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

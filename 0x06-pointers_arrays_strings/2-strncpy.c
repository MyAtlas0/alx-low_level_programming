#include "main.h"

/**
 * *_strncpy - prototypr function to copy strings
 *
 * loop_condition - used to iterate and copy elements from src to dest
 *
 * @dest: variable for elements in string destination
 *
 * @src: variable for elements in string source
 *
 * @n: number of bytes to be copies from source
 *
 * Return: resturns result of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include "main.h"

/**
 * *_strcat - prototype function for char *dest, char *src
 *
 * loop condition - iterates dest1, src1, before concatinating src to dest
 *
 * @dest: variable used to hold destination elements of the n
 *
 * @src: variable used to hold source elements of n
 *
 * Return: returns pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest1 = 0;
	int src1 = 0;
	int n;

	for (n = 0; dest[n] != '\0'; n++)
	{
		dest1++;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		src1++;
	}
	for (n = 0; n <= src1; n++)
	{
		dest[dest1 + n] = src[n];
	}
	return (dest);
}

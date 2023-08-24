#include "main.h"

/**
 * *_strncat - prototype function of strings dest & src upto n byte
 *
 * @dest: variable that points to destination string
 *
 * @src: variable that points to source string
 *
 * @n: variable that decrares the number of bytes in the string
 *
 * loop_condition - finds dest len and appends stings up to n byte from src
 *
 * Return: returns the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest1 = 0;
	int i;

	while (dest[dest1] != '\0')
	{
		dest1++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest1 + i] = src[i];
	}
	return (dest);
}

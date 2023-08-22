#include "main.h"

/**
 * *_strcpy - prototype function for string
 *
 * @src: variable that copies strings including the null to dest
 *
 * @dest: buffer pointer to recieve strings from src
 *
 * Return: returns value to pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}

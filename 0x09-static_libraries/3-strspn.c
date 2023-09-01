#include "main.h"

/**
 * _strspn - prototype function that request length of a prefix substring.
 *
 * loop condition - iterates loop till accept not present
 *
 * @s: variable to declare search string.
 *
 * @accept: variable to search for bytes.
 *
 * Return: returns iteration consistsing of only bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; s[i] != accept[n]; n++)
		{
			if (accept[n] == '\0')
			{
				return (i);
			}
		}
	}
	return (0);
}

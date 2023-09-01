#include "main.h"

/**
 * *_strpbrk - prototype function that searches string for set of bytes
 *
 * @s: variable represesnting string to search
 *
 * @accept: variable for sting to find in s
 *
 * Return: returns pointer foundd or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}

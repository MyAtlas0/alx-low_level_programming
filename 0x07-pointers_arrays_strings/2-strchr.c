#include "main.h"

/**
 * *_strchr - prototype function to locate character in string
 *
 * condition - iterates through string to find first occurrence of 'c'
 *
 * @s: variable for sting to search
 *
 * @c: variable for character to locatate during iteration
 *
 * Return: returns first occurance or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	return (NULL);
}

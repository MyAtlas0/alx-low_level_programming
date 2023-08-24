#include "main.h"

/**
 * _strcmp - prototype function for comparing 2 strings
 *
 * loop condition - loops ascii value of s1 and s2 till mismatch or '\0'
 *
 * @s1: variable to declare first string
 *
 * @s2: variable to declare second string
 *
 * Return: returns value of s1 - s2 if less equals or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int cmp = *s1 - *s2;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (cmp != 0)
		{
			return (cmp);
		}
		s1++;
		s2++;
	}
	return (cmp);
}

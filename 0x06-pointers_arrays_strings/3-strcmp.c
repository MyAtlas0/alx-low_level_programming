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
 * Return: returns value of s1 < s2 if less equals or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0' || s2[n] != '\0'; n++)
	{
		if (s1[n] != s2[n])
		{
			if (s1[n] < s2[n])
			{
				return (s1[n] - s2[n]);
			}
			else if (s1[n] > s2[n])
			{
				return (s1[n] - s2[n]);
			}
		}
	}
	return (0);
}

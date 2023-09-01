#include "main.h"

/**
 * wildcmp - prototype function to compare 2 stings
 *
 * condition - compares charcter in both strings, if !match return 0
 *
 * @s1: variable for first string
 *
 * @s2: variable for second string
 *
 * Return: returns output after string comparison done
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, (s2 + 1)) || (*s1 != '\0' && wildcmp((s1 + 1), s2)));
	}
	return (0);
}

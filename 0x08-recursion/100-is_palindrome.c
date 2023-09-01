#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Prototype function to check if string is empty
 *
 * condition - iterates through to check if string empty or not
 *
 * @s: variable for string inputs
 *
 * Return: returns 1 if empty else returns 0
 */

int is_palindrome(char *s)
{
	int i, n;
	int len = _strlen(s);

	for (i = 0, n = len - 1; i < n; i++, n--)
	{
		if (s[i] != s[n])
		{
			return (0);
		}
	}
	return (1);
}


/**
 * _strlen - helper function to calculate lenth of string
 *
 * @s: variable for string input
 *
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

#include "main.h"
#include <stdio.h>

/**
 * check_string - helper function to check  if string is empty
 *
 * condition - checks if start and end are equal else return 0
 *
 * @s: variable for sting inputs
 *
 * @start: variable for the start of the string index
 *
 * @end: variable for the end of the string index
 *
 * Return: returns 1 if sub_string empty else 0
 */

int check_string(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	return (check_string(s, (start + 1), (end - 1)));
}


/**
 * is_palindrome - Prototype function to check if string is empty
 *
 * @s: variable for string inputs
 *
 * Return: after function tests, returns 1 if empty else returns 0
 */


int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_string(s, 0, (len - 1)));
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
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + (_strlen(s + 1)));
}

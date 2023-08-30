#include "main.h"

/**
 * _strlen_recursion - prototype function that returns string length
 *
 * if condition - base_case of recursion
 *
 * @s: vairable pointer to string characters
 *
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

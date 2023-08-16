#include "main.h"

/**
 * _isalpha - function prototype for int c
 *
 * nested if statenment - compare value for c from 'a' to 'z' and 'A' to 'Z'
 *
 * @c: ASCII character to be compared
 *
 * Return: returns 1 if c is a character lower or upper, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

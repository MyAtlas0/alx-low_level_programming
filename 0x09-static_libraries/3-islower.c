#include "main.h"

/**
 * _islower - function prototype for int c
 *
 * if statement - compare lowercase characters c to ASCII from 'a' to 'z'
 *
 * @c: ASCII parameter to be checked
 *
 * Return: returns 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

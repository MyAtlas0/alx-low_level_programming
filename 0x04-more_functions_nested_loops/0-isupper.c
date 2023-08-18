#include "main.h"

/**
 * _isupper - prototype function
 *
 *@c: declared variable used for unction
 *
 *Return: returns 1 if c is uppercase, else returns 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

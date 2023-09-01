#include "main.h"

/**
 * _isdigit - prototype function
 *
 *@c: declared variable used to check for ASCII digit 0-9
 *
 *Return: returns 1 if c is digit, else returns 0
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _putchar - Function to display C characters in STANDARD_OUTPUT.
 *
 * @c: Represents the characters to print.
 *
 * Return: 1 on success.
 *
 * On error, -1 is returned, and errno is set appropiately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

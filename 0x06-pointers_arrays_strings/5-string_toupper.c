#include "main.h"

/**
 * *string_toupper - prototype function to covert lower to uppercase in char *
 *
 * @str: modified variable selected to covert strings
 *
 * Return: returns modified string (str)
 */

char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
		}
	}
	return (str);
}

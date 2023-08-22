#include "main.h"

/**
 * _atoi - prototype function to convert strings to integar
 *
 * @s: inputs elements in a string
 *
 * loop condition - iterates throuh each character in the string 's'
 *
 * Return: resturns the multiple of result and 'i'
 */

int _atoi(char *s)
{
	int n = 0;
	int i = 1;
	int result = 0;

	while (s[n] != '\0')
	{
		if (s[n] == '-')
		{
			i = -i;
		}
		else if (s[n] >= '0' && s[n] <= '9')
		{
			result = result * 10 + (s[n] - '0');
		}
		else if (result != 0)
		{
			break;
		}
		n++;
	}
	return (result * i);
}

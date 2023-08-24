#include "main.h"

/**
 * *cap_string - prototype function to captalize all words of a string
 *
 * @str: variable to declare strings to be capitalited
 *
 * Return: returns str, to terminate function
 */

char *cap_string(char *str)
{
	int n;
	int cap_n;
	char s[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n == 0 && str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
		}
		for (cap_n = 0; cap_n < 13; cap_n++)
		{
			if (str[n] == s[cap_n])
			{
				if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
				{
					str[n + 1] = str[n + 1] - 32;
				}
			}
		}
	}
	return (str);
}

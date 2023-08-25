#include "main.h"
#include <stdio.h>

/**
 * *rot13 - prototype function for encoding strings
 *
 * nested loop_condition - iterate string then search for character to replace
 *
 * @str: encoded string
 *
 * Return: returns output of pointer to be encoded
 */

char *rot13(char *str)
{
	int n, i;
	char original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotate[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (n = 0; str[n] != '\0'; n++)
	{
		for (i = 0; original[i] != '\0'; i++)
		{
			if (str[n] == original[i])
			{
				str[n] = rotate[i];
				break;
			}
		}
	}

	return (str);
}

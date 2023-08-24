#include "main.h"

/**
 * *leet - prototype function to replace letters with digit
 *
 * loop_condition - replaces matches found in each iterations then breaks
 *
 * @str: variable used to declare strings
 *
 * Return: returns output of str; to terminate function
 */

char *leet(char *str)
{
	int n, i;
	char *letters = "aeotlAEOTL";
	char *l_digit = "4307143071";

	for (n = 0; str[n] != '\0'; n++)
	{
		for (i = 0; letters[i] != '\0'; i++)
		{
			if (str[n] == letters[i])
			{
				str[n] = l_digit[i];
			}
		}
	}
	return (str);
}

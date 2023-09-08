#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - prototype variable for concatinating 2_strings
 *
 * condition - checks if string is empty and the length of s1, s2;
 *		before allocatig memory to concatonate the copied strings
 *
 * @s1: variable representing string_1
 *
 * @s2: variable repesenting string_2
 *
 * @n: variable representing max number of byte of concatenate from s2
 *
 * Return: returns ponter of the concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	size_t len_1, len_2;
	char *str;

	if (s1 == NULL)
	{
		s1 = (" ");
	}
	if (s2 == NULL)
	{
		s2 = (" ");
	}
	len_1 = strlen(s1);
	len_2 = strlen(s2);

	if (n >= len_2)
	{
		n = len_2;
	}
	str = malloc(sizeof(char) * (len_1 + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';
	return (str);
}

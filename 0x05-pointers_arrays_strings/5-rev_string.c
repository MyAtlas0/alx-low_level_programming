#include "main.h"

/**
 * rev_string -  prototype function for 'char *s' pointer
 *
 * @s: variable for input pointer
 *
 * for_loop condition - swap from start to middle & corresponding end to middle
 *
 * Return: returns NULL, and terminates function
 */

void rev_string(char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		count++;
	}
	for (n = 0; n < count / 2; n++)
	{
		char temp;

		temp = s[n];
		s[n] = s[count - 1 - n];
		s[count - 1 - n] = temp;
	}
}

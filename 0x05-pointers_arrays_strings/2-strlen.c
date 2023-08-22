#include "main.h"

/**
 * _strlen - prototype function for char *s
 *
 * while loop condition - loop pointer till '\0' then terminate loop
 *
 * @s: variable used to run the pointer charcter till NULL ('\0')
 *
 * Return: returns increatment
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count++);
}

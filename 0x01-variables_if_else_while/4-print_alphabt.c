#include <stdio.h>

/**
 * main - this is the main function
 *
 * while loop - used a while...if statement and != expression to exempt "e","q"
 *
 * Return: always returns 0, to terminte main function
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
		lowercase++;
	}

	putchar('\n');
	return (0);
}

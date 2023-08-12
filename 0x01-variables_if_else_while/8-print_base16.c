#include <stdio.h>

/**
 * main - this is the main function
 *
 * for loop - prints hexadecimal 0-9, resets thru a-f to base16 using putchar
 *
 * Return: always returns 0, to terminate main function
 */

int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}

	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}

	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * main - main function of prototype to print all arguments
 *
 * condition - finds number of arguments recieved before looping thu argv
 *
 * @argc: variable for arguments passed through program
 *
 * @argv: variable for array array soring the arguments
 *
 * Return: returns 0 too terminate program
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

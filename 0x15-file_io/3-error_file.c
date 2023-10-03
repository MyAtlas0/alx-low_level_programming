#include "main.h"

/**
 * error_file - Helper function that checks if the files can be opened, and
 *              exits with an error message if it cant.
 *
 * @file_from: Represents file being copied from.
 *
 * @file_to: Represents file being copied to.
 *
 * @argv: Argument vector variable.
 *
 * Return: returns nothing.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

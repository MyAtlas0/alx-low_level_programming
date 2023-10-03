#include "main.h"

/**
 * main - Function to copy content of one file to another.
 *
 * @argc: Represents the number of arguments.
 *
 * @argv: Represents the arguments vector variable.
 *
 * Return: Always Returns 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t count, rw;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv);

	count = 1024;
	while (count == 1024)
	{
		count = read(file_from, buffer, 1024);
		if (count == -1)
		{
			error_file(-1, 0, argv);
		}
		rw = write(file_to, buffer, count);
		if (rw == -1)
		{
			error_file(0, -1, argv);
		}
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	}
	return (0);
}

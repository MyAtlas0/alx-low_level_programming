#include "main.h"

/**
 * read_textfile - Function that reads a textfile and,
 *			prints to the POSIX standard output.
 *
 * Condition - checks if filename is NULL, and returns 0,
 *		checks if the file cannot be openned or read, and returns 0,
 *		checks if write fails or does not write the expected amount.
 *		before freeing all memory allocated.
 *
 * @filename: Represents the textfile to be read.
 *
 * @letters: Represents the number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (w);
}

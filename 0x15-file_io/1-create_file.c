#include "main.h"

/**
 * create_file - Function to create a file
 *
 * Condition - Checks if filename is NULL, then opens the file, and return,
 *		-1 if filed to open file. before checking the content if NULL,
 *		sets to an empty string.
 *		finally write content to the file, and closes before returning.
 *
 * @filename: Represents thename of file to be created.
 *
 * @text_content: Represents the content to be written into the file.
 *
 * Return: 1 on suxxess, and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	ssize_t rw;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = " ";
	}

	while (text_content[count])
	{
		count++;
	}
	rw = write(fd, text_content, count);
	if (rw == -1 || rw != count)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

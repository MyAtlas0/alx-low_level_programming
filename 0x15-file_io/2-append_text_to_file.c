#include "main.h"

/**
 * append_text_to_file - Function to append a text to the end of a file.
 *
 * Condition - Checks if filename is NULL, then opens the file to append,
 *		and returns -1 if failed to open file. before checking
 *		the content if is not NULL,append to the end of the file and,
 *		write content to the file, and closes before returning.
 *
 * @filename: Represents the name of file to be appended.
 *
 * @text_content: Represents the content to be append to the file.
 *
 * Return: 1 on success, and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	ssize_t rwr;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[count])
		{
			count++;
		}

		rwr = write(fd, text_content, count);
		if (rwr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

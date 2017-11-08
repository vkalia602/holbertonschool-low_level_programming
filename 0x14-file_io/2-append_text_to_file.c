#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * append_text_to_file - Function that appends a text at the end of a file.
 * @filename: file to be created
 * @text_content: content to be written in @filename file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, w_len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		fd = open(filename, O_WRONLY | O_APPEND, 0600);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
		w_len = write(fd, text_content, length);
		if (w_len < 0)
		{
			close(fd);
			return (-1);
		}

	}
	else
	{
		fd = open(filename, O_WRONLY | O_APPEND, 0600);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
		else
			close(fd);
			return (1);
	}

	close(fd);
	return (1);
}

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - Function that reads a text file and
 * prints it to standard output.
 * @filename: Text file
 * @letters: number of letters to read or print
 * Return: Count of the letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int count, w_len;
	char *buffer;

	buffer = malloc(letters * sizeof(char) + 1);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (0);
	}
	count = read(fd, buffer, letters);
	buffer[count] = '\0';
	close(fd);

	w_len = write(STDOUT_FILENO, buffer, count);
	if (w_len < 0 || count != w_len)
		return (0);

	free(buffer);
	return (count);

}

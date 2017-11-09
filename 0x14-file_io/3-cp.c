#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * print_error - Function prints error message for the corresponding exit code.
 * @code: Exit code
 * @arg: file name for error statements
 * Return: void
 */
void print_error(int code, char *arg)
{
	if (code == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
		exit(98);
	}
	else if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
		exit(99);
	}
}
/**
 * close_error - Function writes error statement for exit 100.
 * @code: Exit code for the error
 * @fd_value: Value of the file descriptor.
 * Return: void
 */
void close_error(int code, int fd_value)
{
	if (code == 100)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}
/**
 * main - Program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: Pointer to arguments
 * Return: 1 on success and -1 on failure
 */
int main(int argc, char *argv[])
{
	int count_r, count_w, fd_from, fd_to;
	char *buffer;

	if (argc != 3)
		print_error(97, NULL);
	if (argv[1] == NULL)
		print_error(98, argv[1]);
	if (argv[2] == NULL)
		print_error(99, argv[2]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(99, argv[2]);
	buffer = malloc(sizeof(char) * CHARMAX);

	do {
		count_r = read(fd_from, buffer, CHARMAX);
		if (count_r == -1)
			print_error(98, argv[1]);
		count_w = write(fd_to, buffer, count_r);
		if (count_w == -1)
			print_error(99, argv[2]);
	} while (count_r == 1024);

	if (close(fd_from) == -1)
		close_error(100, fd_from);

	if (close(fd_to) == -1)
		close_error(100, fd_to);

	free(buffer);
	return (1);
}

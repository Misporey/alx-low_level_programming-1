#include "holberton.h"
/**
 * read_textfile -reads a text file and prints it to the POSIX standard output.
 * @filename: file to be read.
 * @letters: number of letters to read and print
 * Return:numbers it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_write, fd_read;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	fd_read = read(fd, buffer, letters);
	if (fd_read == -1)
	{
		return (0);
	}
	fd_write = write(STDOUT_FILENO, buffer, fd_read);
	if (fd_write == -1)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (fd_write);
}

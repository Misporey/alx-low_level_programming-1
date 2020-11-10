#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of  file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_write;

	if (text_content == NULL)
	{
		return (1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	fd_write = write(fd, text_content, _strlen(text_content));

	if (fd_write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;
/*incremeant up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}

#include "main.h"

/**
 * _strlen - return the length of string
 * @s: the string
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - append text to file
 * @filename: name of file to create
 * @text_content: write in file
 *
 * Return: 1 on success, 0 on failers
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		b = write(fd, text_content, len);
	close(fd);
	return (b == len ? 1 : -1);
}

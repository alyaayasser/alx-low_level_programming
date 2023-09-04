#include "main.h"

/**
 * read_textfile - reads a text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read or printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = read(fd, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(fd);
	return (b);
}

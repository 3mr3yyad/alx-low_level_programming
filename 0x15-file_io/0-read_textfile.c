#include "main.h"

/**
 * read_textfile - main
 * @filename: input
 * @letters: input
 * Return: the actual number of letters it could read and prin
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t x;
	char buf[RBSIZE * 8];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	x = read(fd, &buf[0], letters);
	x = write(STDOUT_FILENO, &buf[0], x);

	close(fd);

	return (x);
}

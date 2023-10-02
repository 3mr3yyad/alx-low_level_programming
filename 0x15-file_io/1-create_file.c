#include "main.h"

/**
 * strlng - strlen
 * @s: input
 * Return: a
 */

int strlng(char *s)
{
	int a = 0;

	if (!s)
		return (0);

	while (*s++)
		a++;
	return (a);
}

/**
 * create_file - main
 * @filename: input
 * @text_content: input1
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t x = 0, lng = strlng(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (lng)
		x = write(fd, text_content, lng);

	close(fd);

	return (x == lng ? 1 : -1);
}

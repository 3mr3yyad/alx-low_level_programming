#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP |S_IROTH)

/**
 * main -  program that copies the content of a file to another
 * @_argc: argc
 * @_argv: argv
 * Return: 1 on success, -1 on failure
 */

int main(int _argc, char **_argv)
{
	int from_fd = 0, to_fd = 0;
	ssize_t x;
	char buf[RBSIZE];

	if (_argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	from_fd = open(_argv[1], O_RDONLY);

	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, _argv[1]), exit(98);

	to_fd = open(_argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, _argv[2]), exit(99);

	while ((x = read(from_fd, buf, RBSIZE)) > 0)
		if (write(to_fd, buf, x) != x)
			dprintf(STDERR_FILENO, ERR_NOWRITE, _argv[2]), exit(99);

	if (x == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, _argv[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);

	if (from_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	
	return (EXIT_SUCCESS);
}

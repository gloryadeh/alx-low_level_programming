#include "main.h"

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	char buff[1024];
	int fd_to, fd_from, num_read, num_write;

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[1]), exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 664);
	if (fd_to == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	do {
		num_read = read(fd_from, buff, 1024);
		if (num_read == -1)
		{
			close(fd_from), close(fd_to);
			dprintf(STDOUT_FILENO, "Error, Can't read from file %s\n", av[1]), exit(98);
		}
		num_write = write(fd_to, buff, num_read);
		if (num_write == -1 || num_read != num_write)
		{
			close(fd_from), close(fd_to);
			dprintf(STDOUT_FILENO, "Error, Can't write to %s\n", av[2]), exit(99);
		}
	} while (num_read == 1024);
	if (close(fd_from == -1))
	{
		dprintf(STDOUT_FILENO, "Can't close fd %d\n", fd_from), exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDOUT_FILENO, "Can't close fd %d\n", fd_to), exit(100);
	}
	return (0);
}

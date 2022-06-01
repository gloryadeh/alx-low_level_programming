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
	char buff[BUFF_SIZE];
	int fd_to, fd_from, num_read, num_write;
	mode_t mode;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[1]), exit(98);
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	do {
		num_read = read(fd_from, buff, BUFF_SIZE);
		if (num_read == -1)
		{
			close(fd_from), close(fd_to);
			dprintf(STDERR_FILENO, "Error, Can't read from file %s\n", av[1]), exit(98);
		}
		num_write = write(fd_to, buff, num_read);
		if (num_write == -1 || num_read != num_write)
		{
			close(fd_from), close(fd_to);
			dprintf(STDERR_FILENO, "Error, Can't write to %s\n", av[2]), exit(99);
		}
	} while (num_read == BUFF_SIZE);
	if (close(fd_from == -1))
	{
		close(fd_to);
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_from), exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_to), exit(100);
	}
	return (0);
}

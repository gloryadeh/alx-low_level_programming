#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: filename
 * @letters: number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, red, print;
	char *buff;

	/* check invalid filename */
	if (filename == NULL)
		return (0);
	/* create buffer and check if valid */
	buff = malloc(letters + 1);
	if (buff == NULL)
		return (0);
	/* open file and check success */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* read file and check success */
	red = read(fd, buff, letters);
	if (red == -1)
		return (0);
	buff[red] = '\0';
	/* print file and check success */
	print = write(STDOUT_FILENO, buff, red);
	if (print == -1 || print != red)
		return (0);
	/* close file and check success */
	fd = close(fd);
	if (fd == -1)
		return (0);
	free(buff);
	return (print);
}

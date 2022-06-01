#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: if success 1 else, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writes;
	unsigned int len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	/* create file and check success */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = _strlen(text_content);
	writes = write(fd, text_content, len);
	if (writes == -1)
	{
		close(fd);
		return (-1);
	}
	fd = close(fd);
	if (fd == -1)
		return (-1);
	return (1);
}

/**
 * _strlen - gets the length of a string
 * @s: string
 * Return: lengthof string
 */
unsigned int _strlen(char *s)
{
	unsigned int count;

	if (s == NULL)
		return (0);
	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}

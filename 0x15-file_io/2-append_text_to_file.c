#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 if success else, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writes, len;

	if (filename == NULL)
		return (-1);
	/* open file and check success*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		writes = write(fd, text_content, len);
		if (writes == -1)
		{
			close(fd);
			return (-1);
		}
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

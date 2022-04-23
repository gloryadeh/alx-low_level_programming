#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}

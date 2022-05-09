#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int i;

	if (malloc == 0 || size == 0)
	{
		return (NULL);
	}
	buffer = malloc(nmemb * size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		buffer[i] = 0;
	}
	return (buffer);
}

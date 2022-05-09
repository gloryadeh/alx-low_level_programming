#include"main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: newly created array
 */
int *array_range(int min, int max)
{
	unsigned int i, size;
	char *buffer;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++, min++)
	{
		buffer[i] = min;
	}
	return (buffer);
}

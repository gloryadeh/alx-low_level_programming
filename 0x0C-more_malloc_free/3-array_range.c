#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, size;
	char *s;

	if (min > max)
		return (NULL);
	size = (max - min) +  1;
	s = malloc(sizeof(int) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
	{
		a[i] = min;
	}
	return (s);
}

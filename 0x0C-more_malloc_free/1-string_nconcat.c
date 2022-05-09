#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int siz1, size2, i;
	char *s;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		for (size1 = 0; s1[size1]; size1++)
			;
	}
	if (s2 == NULL)
		size2 = 0;
	else
	{
		for (size2 = 0; s2[size2]; size2++)
			;
	}
	if (size2 > n)
		size2 = n;
	s = malloc(sizeof(char) * (size1 + siz2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (i = 0; i < size2; i++)
		s[i + size1] = s2[i];
	s[size1 + size2] = '\0';

	return (s);
}

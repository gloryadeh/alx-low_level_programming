#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of located string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	while (haystack)
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
			else
			{
				break;
			}
			j++
		}
		i++;
	}
	return (0);
}

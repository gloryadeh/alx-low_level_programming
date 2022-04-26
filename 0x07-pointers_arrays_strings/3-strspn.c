#include "main.h"

/**
 * _strspn - gets the egth of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;

	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				res++;
				break;
			}
			j++;
		}
		if  (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (res);
}

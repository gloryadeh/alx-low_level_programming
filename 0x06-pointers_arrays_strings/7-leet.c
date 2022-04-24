#include "main.h"

/**
 * leet - encodes a string int 1337
 * @a: string to encode
 *
 * Return: encoded string
 */
char *leet(char *a)
{
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0';; j++)
		{
			if (a[i] == str1[j])
			{
				a[i] = str2[j];
			}
		}
	}
	return (a);
}

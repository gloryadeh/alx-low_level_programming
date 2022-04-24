#include "main.h"

/**
 * rot13 - encodes a stringusing rot13
 * @a: string to encode
 *
 * Return: a
 */
char *rot13(char *a)
{
	int i, j;

	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (a[i] == str1[j])
			{
				a[i] = str2[j];
				break;
			}
		}
	}
	return (a);
}

#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words a string
 * @str: string
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	char sep[] = {32, 46, 44, 59, 33, 63, 34, 40, 41, 123, 125, 9, 10};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
	}
	return (str);
}

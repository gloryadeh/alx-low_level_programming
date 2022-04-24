#include "main.h"
/**
 * cap_string - capitalizes all words a string
 * @str: string
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	char c[] = {32, 46, 44, 59, 33, 63, 34, 40, 41, 123, 125, 9, 10};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (str[i] == c[j])
			{
				if (str[i + 1] >= 97 && str[i + 1 ] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}

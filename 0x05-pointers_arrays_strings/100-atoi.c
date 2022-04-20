#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * is_numerical - check if int
 * @n: number
 *
 * Return: 1 if number else 0
 */
int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}
/**
 * _atoi - converts string to integer
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int number, i;
	int sign;

	sign = 1;
	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			number = (s[i] - 48) + number * 10;
		} else
		{
			if (number > 0)
			{
				break;
			}
		}

		if (s[i] == ' ')
		{
			continue;
		} else if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	return (number * sign);
}

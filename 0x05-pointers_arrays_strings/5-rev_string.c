#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i, len;
	char *start, *end, temp;

	len = strlen(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
	{
		end++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
	printf("\n");
}

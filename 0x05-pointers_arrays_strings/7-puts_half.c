#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half a string
 * @s: tring
 */
void puts_half(char *s)
{
	int i, len, n;

	len = strlen(s);

	for (i = 0; i <= len - 1; i++)
	{
		if ((len % 2) != 0)
		{
			n = (len - 1) / 2;
		} else
		{
			n = len / 2;
		}
		if (i < n)
		{
			continue;
		} else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
}

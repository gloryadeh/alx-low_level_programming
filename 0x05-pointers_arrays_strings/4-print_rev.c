#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i];
	}
}

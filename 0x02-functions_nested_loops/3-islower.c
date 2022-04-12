#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks for lowercase characters
 * @c: This is the character to print
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

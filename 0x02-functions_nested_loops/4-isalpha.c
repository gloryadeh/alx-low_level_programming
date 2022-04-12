#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks for alphabetical characters
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

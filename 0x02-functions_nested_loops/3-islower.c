#include <stdio.h>

/**
 * _islower -checks for lowercase characters
 * @c: The integer to input
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercae characters
 * @i : The character to print
 *
 * Return: if success 1, else 0
 */
int _isupper(int i)
{
	if (isupper(i))
	{
		return (1);
	}
	return (0);
}

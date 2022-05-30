#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to the string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (b == NULL)
		return (0);
	num = 0;
	while (*b != '\0')
	{
		num <<= 1;
		if (*b == '1')
			num |= 1;
		else if (*b != '0')
			return (0);
		b++;
	}
	return (num);
}

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to the string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num;

	if (b == NULL)
		return (0);
	num = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			num <<= 1; /* num moves right by 1 space */
			num |= 0x01; /* add 1 to num */
		}
		else if (b[i] == '0')
		{
			num <<= 1; /* num moves right by 1 space, no addition is made since its 0 */
		} else
		{
			return (0);
		}
	}
	return (num);
}

#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 without 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		} else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');

	return (0);
}

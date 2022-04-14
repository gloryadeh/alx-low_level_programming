#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The character to print
 *
 * Return: 0
 */
int print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				} else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	return (0);
}

#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: The charactr to print
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar(' ');
	} else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

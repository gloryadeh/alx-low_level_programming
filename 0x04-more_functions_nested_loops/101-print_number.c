#include "main.h"

/**
 * print_number - prints integers
 * @n : The character to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		num (n / 10);
	}
	_putchar(n % 10 + '0');
}

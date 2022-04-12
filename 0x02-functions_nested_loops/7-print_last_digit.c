#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @x: The character to print
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
	int num;

	if (x < 0)
		num = (x * -1) % 10;
		_putchar(num + '0');
	else
		num = x % 10;
		_putchar(num + '0');
	return (num);
}

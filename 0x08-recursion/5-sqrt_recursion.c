#include "main.h"

/**
 * sqrt_a - finds the square root
 * @a: number
 * @b: square
 *
 * Return: square
 */
int sqrt_a(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	else if ((b * b) > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - prints square
 * @n: integer
 *
 * Return: square
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

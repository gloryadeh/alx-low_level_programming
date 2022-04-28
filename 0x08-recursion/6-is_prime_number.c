#include "main.h"

/**
 * print_a - is prime?
 * @a: number
 * @b: check
 *
 * Return: 1 or 0
 */
int print_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (o);
	}
	else if (a == b)
	{
		return (1);
	}
	return (print_a(a, b + 1));
}

/**
 * is_prime_number - prints prime
 * @n: number
 *
 * Return: 1 or 0;
 */
int is_prime_number(int n)
{
	return (print_a(n, 2));
}

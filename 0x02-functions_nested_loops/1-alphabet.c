#include "main.h"

/**
 * print_alphabet - prints alphabets
 * @c: This is the character to print
 *
 * Return - Always 0 (Success)
 */
void print_alphabet(void c)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

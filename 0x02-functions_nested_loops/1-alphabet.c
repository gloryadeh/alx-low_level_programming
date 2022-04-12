#include <stdio.h>

/**
 * print_alphabet - prints all the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
	{
		putchar(l);
	}
	putchar('\n');
}

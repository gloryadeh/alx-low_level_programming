#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char let;
	int count = 1;

	while (count <= 10)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			putchar(let);
		}
		putchar('\n');
		count++;
	}
	return (0);
}

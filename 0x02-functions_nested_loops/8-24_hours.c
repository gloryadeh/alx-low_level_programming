#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	char a, b, c, d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '3'; b++)
		{
			if (a == '2' && b == '4')
				break;

			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '8')
	{
		int y = x;

		while (y <= '9')
		{
			putchar(x);
			putchar(y);
			y++;

			if (x == '0' && y == '1')
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
	putchar('\n');

	return (0);
}

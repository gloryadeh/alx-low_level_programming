#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = x; y < 58; y++)
		{
			for (z = y; z < 58; z++)
			{
				if (x != y && y != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == 55 && y == 56 && z == 57)
					{
						continue;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}

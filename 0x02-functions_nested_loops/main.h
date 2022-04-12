#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char l;
	for(l = 'a'; l <= 'z'; ++l)
	{
		putchar(l);
	}
	putchar('\n');
}

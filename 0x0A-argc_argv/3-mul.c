#include <stdio.h>

/**
 * main - Entry
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc > 3 && argc < 3)
	{
		printf("Error");
	}
	else
	{
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
	}
	return (0);
}

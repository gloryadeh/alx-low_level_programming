#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int count;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	count = 1;
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	
	return (0);
}

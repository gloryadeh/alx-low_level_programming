#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2;
	int a, b, c, d, e;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	a = strcmp(argv[2], "+");
	b = strcmp(argv[2], "-");
	c = strcmp(argv[2], "*");
	d = strcmp(argv[2], "/");
	e = strcmp(argv[2], "%");

	if (a && b && c && d && e)
	{
		printf("Error\n");
		exit(99);
	}
	if ((d == 0 || e == 0) && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(arg1, arg2));

	return (0);
}

#include <stdio.h>

/**
 * print_first - prints before main function is executed
 */
void __attribute__((constructor)) print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

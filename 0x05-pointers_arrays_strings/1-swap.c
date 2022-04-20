#include <stdio.h>

/**
 * swap_int - swaps to integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a; /* save the value at address a */
	*a = *b; /* put b into a */
	*b = temp; /*put temp into b */
}

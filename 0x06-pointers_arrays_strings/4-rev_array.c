#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp[n];

	for (i = 0; i < n; i++)
	{
		temp[n - 1 - i] = a[i];
       
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}

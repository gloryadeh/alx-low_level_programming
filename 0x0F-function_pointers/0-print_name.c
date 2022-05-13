#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return (NULL);
	}
	else
		return (f(name));
}

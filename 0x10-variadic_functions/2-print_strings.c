#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			print("(nil)");

		if (i < n - 1)
			if (separator)
				print("%s", separator);
	}
	print("\n");

	va_end(ap);
}

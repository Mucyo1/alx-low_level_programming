#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to be called.
 * @separator: string to be printed.
 * @n: The number of integer.
 *
 * @...: A variable number.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int digits;

	va_start(numb, n);

	for (digits = 0; digits < n; digits++)
	{
		printf("%d", va_arg(numb, int));

		if (digits != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numb);
}

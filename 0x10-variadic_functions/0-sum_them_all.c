#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to be called.
 * @n: The number of paramters.
 *
 * @...: number of paramters.
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x, add = 0;

	va_start(p, n);

	for (x = 0; x < n; x++)
		add += va_arg(p, int);

	va_end(p);

	return (add);
}

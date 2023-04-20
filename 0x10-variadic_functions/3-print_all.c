#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function to be called.
 * @format: function prototype.
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *separ = "";
	char *ptr;

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separ, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(l, double));
					break;
				case 's':
					ptr = va_arg(l, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", separ, ptr);
					break;
				default:
					x++;
					continue;
			}
			separ = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(l);
}

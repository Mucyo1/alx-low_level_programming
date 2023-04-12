#include "main.h"
/**
 * _print_rev_recursion - this function when called
 * prints the string in reverse.
 * @s: This is the strig variable to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}

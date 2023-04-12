#include "stdio.h"
#include "main.h"
/**
 * _puts_recursion - this is a function that worls like  puts(); code
 * @s: this is an input value
 * Return: it always return (0) when the code is successfull
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}

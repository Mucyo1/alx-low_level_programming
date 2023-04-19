#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: string declared in function
 * @f: a pointer
 *
 * Return: returns nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}


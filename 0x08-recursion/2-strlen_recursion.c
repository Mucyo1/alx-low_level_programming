#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - function that return the length of a string.
 * @s: The string with length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (strlen(s) == 0)
	{
		return (0);
	}
	else
	{
		n = n + _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}

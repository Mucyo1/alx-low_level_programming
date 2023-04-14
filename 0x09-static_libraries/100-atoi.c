#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int x = 1, v = 0;
	unsigned int b = 0;

	while (!(s[v] <= '9' && s[v] >= '0') && s[v] != '\0')
	{
		if (s[v] == '-')
			x *= -1;
		v++;
	}
	while (s[v] <= '9' && (s[v] >= '0' && s[v] != '\0'))
	{
		b = (b * 10) + (s[v] - '0');
		v++;
	}
	b *= x;
	return (b);
}

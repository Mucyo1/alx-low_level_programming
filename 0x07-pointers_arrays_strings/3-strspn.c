#include "main.h"
/**
 * _strspn - function name entry point
 * @s: input
 * @accept: input
 * Return: returns 0 when it's Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				p++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (p);
		}
		s++;
	}
	return (p);
}


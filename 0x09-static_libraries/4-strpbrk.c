#include "main.h"
/**
 * _strpbrk - function to be called
 * @s: input
 * @accept: input
 * Return: returns 0 when done
 */
char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}

#include "main.h"
/**
 * _strchr - The entry point
 * @s: input
 * @c: input
 * Return: returns 0 when it's success
 */
char *_strchr(char *s, char c)
{
	int p = 0;

	for (; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (&s[p]);
	}
	return (0);
}

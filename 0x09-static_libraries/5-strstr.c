#include "main.h"
/**
 * _strstr - function
 * @haystack: input
 * @needle: input
 * Return: returns 0 when it's Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *a = needle;

		while (*x == *a && *a != '\0')
		{
			x++;
			a++;
		}

		if (*a == '\0')
			return (haystack);
	}

	return (0);
}


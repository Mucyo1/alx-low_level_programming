#include "main.h"
/**
 * _memset - fill a block of memory with a value
 * @s: starting address of memory
 * @b: the wanted value
 * @n: number of bytes to be changed
 *
 * Return: changed number to be return
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}


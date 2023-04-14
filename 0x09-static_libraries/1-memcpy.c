#include "main.h"
/**
 *_memcpy - a function that copies memory
 *@dest: stored memory
 *@src: copied memory
 *@n: number of bytes
 *
 *Return: changes n bytes copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int x = n;

	for (; a < x; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}


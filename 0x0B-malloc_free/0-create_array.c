#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that create array of size(size) and assign char c
 * @size: refers to the size of array
 * @c: this is an asigned variable
 * Return: this is a pointer to array and return NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;
	return (s);
}


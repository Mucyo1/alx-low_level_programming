#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: refers to number of bytes to allocate
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *tab;

	tab = malloc(b);

	if (tab == NULL)
		exit(98);

	return (tab);
}


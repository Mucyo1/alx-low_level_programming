#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 *
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: return  pointer to the new array
 */
int *array_range(int min, int max)
{
	int *tab;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	tab = malloc(sizeof(int) * size);

	if (tab == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		tab[x] = min++;

	return (tab);
}

#include "function_pointers.h"
/**
 * int_index - function declared
 * @array: function prototype
 * @size: function prototypes
 * @cmp: pointer to function
 *
 * Return: returns 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}


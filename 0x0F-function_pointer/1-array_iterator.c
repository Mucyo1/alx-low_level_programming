#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -function to be callled
 * @array: an array
 * @size: size of element to be printed
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;

	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}


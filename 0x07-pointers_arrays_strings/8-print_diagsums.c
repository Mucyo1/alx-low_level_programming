#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function prototype
 * @a: input a
 * @size: input size
 * Return: returns zero when the code is a success
 */
void print_diagsums(int *a, int size)
{
	int n1, n2, p;

	n1 = 0;
	n2 = 0;

	for (p = 0; p < size; p++)
	{
		n1 = n1 + a[p * size + p];
	}

	for (p = size - 1; p >= 0; p--)
	{
		n2 += a[p * size + (size - p - 1)];
	}

	printf("%d, %d\n", n1, n2);
}

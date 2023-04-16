#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates to new memory space location
 * @str: string char
 * Return: returns 0 when it's a success
 */

char *_strdup(char *str)
{
	char *fly;
	int x, b = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	fly = malloc(sizeof(char) * (x + 1));

	if (fly == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		fly[b] = str[b];

	return (fly);
}

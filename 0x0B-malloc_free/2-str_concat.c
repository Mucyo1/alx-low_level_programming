#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function to be called
 * @s1: first input of concat
 * @s2:second input of concat
 * Return: returns the  concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int x, xf;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = xf = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[xf] != '\0')
		xf++;
	con = malloc(sizeof(char) * (x + xf + 1));

	if (con == NULL)
		return (NULL);
	x = xf = 0;
	while (s1[x] != '\0')
	{
		con[x] = s1[x];
		x++;
	}

	while (s2[xf] != '\0')
	{
		con[x] = s2[xf];
		x++, xf++;
	}
	con[x] = '\0';
	return (con);
}

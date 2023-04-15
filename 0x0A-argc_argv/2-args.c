#include <stdio.h>
#include "main.h"

/**
 * main - function that prints all arguments it receives
 * @argc: refers to the number of arguments
 * @argv: refers to the array of arguments
 *
 * Return: Always  returns 0 when it's a Success 
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}


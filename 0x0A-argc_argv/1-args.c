#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the number of arguments
 * @argc: refers to the number of arguments
 * @argv: refers to the array of arguments
 *
 * Return: Always returns 0 when it's Success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

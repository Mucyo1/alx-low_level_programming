#include <stdio.h>
#include "main.h"

/**
 * main - main function prints the name of the program
 * @argc: refers to the number of arguments
 * @argv: refers to the array of arguments
 *
 * Return: Always returns 0 when it's a Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

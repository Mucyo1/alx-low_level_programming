#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argc: refers to the number of arguments
 * @argv: refers to the array of arguments
 *
 * Return: returns 0 when it's a Success
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *aaa;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	aaa = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", aaa[x]);
			break;
		}
		printf("%02hhx ", aaa[x]);
	}
	return (0);
}


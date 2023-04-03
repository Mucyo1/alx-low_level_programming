#include "main.h"
/**
 * print_chessboard - function
 * @a: array
 * Return: returns 0 when its success
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int o;

	for (x = 0; x < 8; x++)
	{
		for (o = 0; o < 8; o++)
			_putchar(a[x][o]);
		_putchar('\n');
	}
}


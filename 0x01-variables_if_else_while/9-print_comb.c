#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/*betty style doc for functionmain goes therw */
/**
 * main - function ...
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

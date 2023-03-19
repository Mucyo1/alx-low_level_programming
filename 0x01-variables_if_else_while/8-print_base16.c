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
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

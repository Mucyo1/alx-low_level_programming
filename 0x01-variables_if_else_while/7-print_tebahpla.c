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
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

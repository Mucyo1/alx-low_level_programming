#include "main.h"
/**
 * _isalpha - function that checks for alphabets
 * @c: parametr to be checked
 * return: 1 if its an alphabet
 * and zero otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

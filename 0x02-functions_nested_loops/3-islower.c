#include "main.h"
/**
 *  _islower -  show 1 if the input is a lower character
 *  another case shows zero 0
 * @c: parameter to be print
 *
 * _islower: function that prints lowercase
 *
 * return: 1 if it is a lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}

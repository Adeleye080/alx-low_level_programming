#include "main.h"

/**
 * print a string followed by a new line
 *
 * @str: strng to be printed
 * @_put command use to print str
 */

void _puts(char *str)
{
	put(str);
	_putchar("/n");
}

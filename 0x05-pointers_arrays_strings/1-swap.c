#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: first integer.
 * @b: second integer.
 *
 */

void swap_int(int *a, int *b)
{
	int d;

	d = 0;
	d = *a;
	*a = *b;
	*b = d;
}

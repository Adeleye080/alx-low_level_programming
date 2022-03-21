#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function that assign a random number to a variable
 * @n: random number
 *
 * Return: a random number with a statement
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}

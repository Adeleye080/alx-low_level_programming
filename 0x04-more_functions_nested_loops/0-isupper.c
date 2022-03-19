#include "main.h"

/**
 * _isupper - checks for uppercase character
  @c: int type number to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}

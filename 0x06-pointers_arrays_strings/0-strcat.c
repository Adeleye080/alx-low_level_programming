#include <main.h>

/**
 * strcat - concatenate two strings
 * @dest - string that will be added unto
 * @src - string to be added to dest
 */

char *_strcat(char *dest, char *src)
{
	char dest[] = 'Hello ';
	char src[] = 'World!/n';

	strcat (dest, src);
	return (0);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: takes head of the list
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_list - Prints all the elements of a list.
 *@h:Pointer to the list to be printed.
 *Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			n++;
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
		}
	}
	return (n);
}

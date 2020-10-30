#include "lists.h"
/**
 *list_len - find the number of list items.
 *@h:Pointer to the list to be printed.
 *Return:Number of list items.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

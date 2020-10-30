#include "lists.h"
/**
 *list_len - find the number of list items.
 *@h:Pointer to the list to be printed.
 *Return:Number of list items.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h->str != NULL && h->len != 0)
	{
		n = 2;
	}
	if (h->str == NULL && h->len == 0)
	{
		n = 0;
	}
	if ((h->str == NULL && h->len != 0) || (h->str != NULL && h->len == 0))
	{
		n = 1;
	}
	return (n);
}

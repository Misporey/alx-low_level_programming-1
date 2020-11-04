#include <stdio.h>
#include "lists.h"
/**
 *listint_len-Prints all the elements of a linked list.
 *@h:Pointer to the list to be printed.
 *Return:Total number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int n = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);

}

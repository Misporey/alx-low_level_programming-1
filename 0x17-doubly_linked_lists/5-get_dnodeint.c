#include "lists.h"
/**
 *get_dnodeint_at_index-Returns nth node of a doubly linked list.
 *@head: Pointer to the head of a doubly linked list.
 *@index: index of the node starting at zero.
 *Return: Null if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = head;

	for (i = 0; i <= (index - 1); i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}

#include "lists.h"
/**
 *get_nodeint_at_index-returns the nth node of a listint_t linked list.
 *@head:Pointer to the head node.
 *@index:Position of the node to return.
 *Return:Node at specified index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

/*	for (i = 0; i < index; i++)*/
/*	{*/
/*		temp = temp->next;*/
/*		}*/
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}

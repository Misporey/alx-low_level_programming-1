#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index-Deletes a node at specified index.
 *@head:Pointer to a pointer that points to the head of the node.
 *@index:Index of the node to delete.
 *Return:1 if successful, -1 if fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *toDelete;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1 && temp != NULL)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		i++;
	}
	toDelete = temp;
	temp->next = temp->next->next;
	free(toDelete);
	return (1);
}

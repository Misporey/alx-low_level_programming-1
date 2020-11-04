#include "lists.h"
#include <stdlib.h>


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

	while (i < index -1 && temp != NULL)
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

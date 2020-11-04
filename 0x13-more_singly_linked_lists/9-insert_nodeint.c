#include "lists.h"
/**
 *insert_nodeint_at_index-Inserts a node at specified index.
 *@head:Pointer to a pointer that points to the head node.
 *@idx:Index where to add the new node.
 *@n:Element n of the new node.
 *Return:Pointer to the newly added node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *navigate = *head;
	unsigned int i = 0;

	temp->n = n;

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (navigate != NULL)
		{
		navigate = navigate->next;
		}
	}
	if (navigate == NULL)
	{
		free(navigate);
		return (NULL);
	}
	else
	{
		temp->next = navigate->next;
		navigate->next = temp;
		return (temp);
	}
}

#include "lists.h"
/**
 *add_nodeint_end-Function that adds a node at the end of a list.
 *@head:Pointer to a pointer that points to the head of the list.
 *@n:A member of the list.
 *Return:Pointer to the newly created node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *navigate = *head;

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	/*check if head is empty, if yes, make temp the head.*/
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}




	while (navigate->next != NULL)
	{
		navigate = navigate->next;
	}
	navigate->next = temp;
	return  (temp);
}

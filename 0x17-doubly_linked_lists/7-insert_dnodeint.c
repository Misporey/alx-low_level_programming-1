#include "lists.h"

/**
 *insert_dnodeint_at_index - Inserts a new node at a given position.
 *@h:Pointer to a pointer that points to the head node.
 *@n: Data of the pointer to be inserted at index n.
 *@idx:Index of the list where the new node should be added.
 *Return: address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp = *h;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = temp;
		newNode->prev = NULL;
		return (newNode);
	}
	newNode->n = n;

	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	return (newNode);
}

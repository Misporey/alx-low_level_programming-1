#include "lists.h"

/**
 *add_dnodeint - Adds a node at the head of a doubly linked list.
 *@head: Pointer to a pointer that points to the head of a doubly
 *linked list.
 *@n:element of the node to be inserted.
 *Return: Address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

/*Assing n to the new node*/
	newNode->n = n;
	/*Check if malloc worked or failed*/
	if (newNode == NULL)
	{
		return (NULL);
	}
	if ((*head) == NULL)
	{
		(*head) = newNode;
	}
	else
	{
		newNode->next = (*head);
		(*head)->prev = newNode;
		(*head) = newNode;
	}

	return (newNode);
}

#include "lists.h"
/**
 *reverse_listint-Reverses a list.
 *@head:Pointer to a pointer that points to the head node.
 *Return:The head node.
 */
listint_t *reverse_listint(listint_t **head)
{
	{
		listint_t *prev = NULL;
		listint_t *current = *head;
		listint_t *next = NULL;

		while (current != NULL)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		*head = prev;
	}
	return (*head);
}

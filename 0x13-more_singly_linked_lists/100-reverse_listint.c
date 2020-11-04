#include "lists.h"
/**
 *reverse_listint-Reverses a list.
 *@head:Pointer to a pointer that points to the head node.
 *Return:The head node.
 */

listint_t *reverse_listint(listint_t **head)
{

listint_t *next;
listint_t *previous = NULL;

while ((*head)->next != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}

(*head)->next = previous;

return (*head);
}

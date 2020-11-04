#include "lists.h"
#include <stdlib.h>
/**
 *free_listint-Frees memory occupied by a list.
 *@head:Pointer to the first node o the list.
 *Return:Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		free(head);
	}

	else
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}

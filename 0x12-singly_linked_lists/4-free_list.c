#include "lists.h"
#include <stdlib.h>
/**
 *free_list-Frees memory occupied by a list.
 *@head:Pointer to the first node o the list.
 *Return:Nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		free(head);
	}

	else
	{
		while (head != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp->str);
			free(tmp);
		}
	}
}

#include "lists.h"
#include <string.h>
/**
 *add_node - Adds a node at the begining of a linked list.
 *@head: Pointer to a pointer that points to the head of the linked list.
 *@str: String to assgin to the element str of the linked list.
 *Return: Returns a node of type list_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *
 *Return: returns the length of the string.
 */

int _strlen(const char *s)
{
	int p = 0;
/*incremeant up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}

#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *add_node_end - Add a node at the end of a linked list.
 *@head:Pointer to a pointer that points to the first node in  a linked list.
 *@str:Pointer to the string to be added to the node as an element.
 *Return: Pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp = *head;


	if  (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;
/*Handle case where the size of the node is one. ie head is null*/
	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	}
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

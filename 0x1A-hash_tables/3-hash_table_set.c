#include <string.h>
#include "hash_tables.h"
/**
 *hash_table_set - Adds an element to the hash table.
 *@ht: Hash table youwantt to add or update the key/value to.
 *@key: Is the key. Cannot be empty.
 *@value:Is the value associated with the key.
 *Return: 1 if success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node;
	char *value_c;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	value_c = strdup(value);

	if (new_node == NULL)
	{
		free(value_c);
		return (0);
	}

	if (value_c == NULL)
		return (0);

	/*Assign values to the new node*/
	new_node->value = value_c;
	new_node->key = strdup(key);
	new_node->next = NULL;

	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

#include "hash_tables.h"
#include "string.h"
/**
 *hash_table_get - Retrieves a value associated with a key.
 *@ht:The hash table to look into.
 *@key: Key for which to retrieve the value.
 *
 *Return:Value associated with the key, NULL if key not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	while (1)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (ht->array[index]->value);
}

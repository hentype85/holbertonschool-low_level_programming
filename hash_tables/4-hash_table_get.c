#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key to get the value of
 * Return:  value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	if (node != NULL)
	{
		while (strcmp(node->key, key) != 0)
			node = node->next;
		
		return (node->value);
	}
	else
		return (NULL);
}

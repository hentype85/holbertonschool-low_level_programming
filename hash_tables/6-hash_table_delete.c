#include "hash_tables.h"

/**
 * hash_table_delete - delete a hashtable
 * @ht: pointer to a hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *nextNode;

	for (i = 0 ; i < ht->size ; i++)
	{
		while (ht->array[i] != NULL)
		{
			nextNode = ht->array[i]->next;

			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);

			ht->array[i] = nextNode;
		}
	}

	free(ht->array);
	free(ht);
	ht->array = NULL;
	ht = NULL;
}

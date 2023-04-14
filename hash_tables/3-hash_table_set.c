#include "hash_tables.h"

/**
 * hash_table_set - add or update an element in a hash table
 * @ht: pointer to the hash table
 * @key: key to add This cannot be an empty string
 * @value: value associated with key
 * Return: upon failure 0, otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int i = 0;
	char *valueCopy = strdup(value);

	if (ht == NULL || key == NULL || valueCopy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueCopy;
			return (1);
		}
		i++;
	}

	newNode = malloc(sizeof(hash_node_t));
	newNode->key = strdup(key);

	if (newNode == NULL || newNode->key == NULL)
	{
		free(valueCopy);
		free(newNode);
		return (0);
	}

	newNode->value = valueCopy;
	newNode->next = ht->array[i];
	ht->array[i] = newNode;

	return (1);
}

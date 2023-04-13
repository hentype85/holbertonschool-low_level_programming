#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 * Return: pointer to the newly hash table created
 * if something went wrong, should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i = 0;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	(*hashtable).size = size;
	(*hashtable).array = malloc(sizeof(hash_node_t *) * size);
	if ((*hashtable).array == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	/*set each element in the array to NULL*/
	while (i < size)
	{
		(*hashtable).array[i] = NULL;
		i++;
	}

	return (hashtable);
}

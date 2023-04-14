#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *printNode;
	unsigned long int i = 0;
	char flag = 0;

	printf("{");

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			printNode = ht->array[i];

			if (printNode != NULL)
			{
				if (flag == 1)
					printf(", ");

				printf("'%s': '%s'", printNode->key, printNode->value);
				printNode = printNode->next;

				if (printNode != NULL)
					printf(", ");
			}

			flag = 1;
		}

		i++;
	}

	printf("}\n");
}

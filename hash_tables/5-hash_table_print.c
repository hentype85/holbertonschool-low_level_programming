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

	if (ht != NULL)
	{
		printf("{");
		for (i = 0 ; i < ht->size ; i++)
		{
			printNode = ht->array[i];

			while (printNode != NULL)
			{
				if (flag == 1)
					printf(", ");

				printf("'%s' : '%s'", printNode->key, printNode->value);
				printNode = printNode->next;

				if (printNode != NULL)
					printf(", ");
			}
			flag = 1;
		}
		printf("}\n");
	}
}

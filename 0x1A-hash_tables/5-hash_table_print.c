#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int printed;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	printed = 0;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (printed > 0)
			{
				printf(", ");
			}
			printf("'%s' : '%s'\n", current_node->key, current_node->value);
			current_node = current_node->next;
			printed++;
		}
	}
	printf("}\n");
}

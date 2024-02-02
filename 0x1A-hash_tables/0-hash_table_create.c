#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 *
 * Return: The function returns the newly created hash table
 * @size: this is the expected size of the hash table
 * while size is the number of slots in the hash table,
 * the array represents the actual slots.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_node *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}

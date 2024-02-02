#include "hash_tables.h"

/*
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_dex;
	key_dex = hash_djb2(key) % size;
	return (key_dex);
}

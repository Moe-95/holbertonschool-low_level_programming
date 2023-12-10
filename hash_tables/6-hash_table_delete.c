#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*hash_table_delete - Delete a hash table
*@ht: The hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *next;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
next = node->next;
free(node->key);
free(node->value);
free(node);
node = next;
}
}

free(ht->array);
free(ht);
}

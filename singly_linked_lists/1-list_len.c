#include <stdio.h>
#include "lists.h"
/**
*list_len - a function to count the elements  of a linkedlist
*@h: linkedlist
*Return: count.
*/
size_t list_len(const list_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}

#include <stdio.h>
#include "lists.h"
/**
*print_list - a function to print the elements of a linkedlist
*@h: LinkedList
*@Return: count.
*
*Return : count.
*/
size_t print_list(const list_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}

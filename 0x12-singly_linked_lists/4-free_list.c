#include "lists.h"
#include <stdlib.h>
/**
 *free_list - entry, frees a linked list
 *@head: head of linked list
 */
void free_list(list_t *head)
{
list *tmp;

while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}

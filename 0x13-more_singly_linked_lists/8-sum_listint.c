#include "lists.h"
/**
 * sum_listint - Calculates the sum of all the numbers in list
 * @head: A pointer to the head of the listint_t list.
 * Return: 0 if list is empty, else the sum of all the numbers
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;

head = head->next;
}
return (sum);
}

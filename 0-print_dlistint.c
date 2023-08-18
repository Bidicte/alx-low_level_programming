#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h: head of list
 * Return: the number of nodes in the list
 **/

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t nodeCount = 0;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
nodeCount++;
}
return (nodeCount);
}

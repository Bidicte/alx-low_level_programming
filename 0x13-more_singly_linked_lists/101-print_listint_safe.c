#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of type listint_t.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *curr = head;
const listint_t *loop = NULL;

while (curr != NULL)
{
printf("[%p] %d\n", (void *)curr, curr->n);
count++;

if (curr < curr->next || curr->next == loop)
{
printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
break;
}

curr = curr->next;
loop = (loop == NULL || loop > curr) ? curr : loop;
}

if (curr != NULL && curr->next != NULL && curr->next >= curr)
{
printf("Loop detected, exiting...\n");
exit(98);
}

return (count);
}

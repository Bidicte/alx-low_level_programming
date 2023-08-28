#include "lists.h"

/**
 * reverse_listint - Reverses a linked list of type listint_t.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: A pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *curr = *head;

while (curr != NULL)
{
listint_t *next = curr->next;
curr->next = previous;
previous = curr;
curr = next;
}

*head = previous;
return (*head);
}

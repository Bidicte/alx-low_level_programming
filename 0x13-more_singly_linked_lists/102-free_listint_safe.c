#include "lists.h"

/**
 * free_listint_safe - a function that prints a listint_t linked list.
 * @h: the head of list
 *
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{

listint_t *curr = *h;
listint_t *next = NULL;
size_t count = 0;

while (curr != NULL)
{
next = curr->next;
free(curr);
count++;
curr = next;

if (curr == *h)
{
*h = NULL;
break;
}
}

return (count);
}

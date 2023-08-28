#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - a function that frees a listint_t list.
 * @head: struct
 * Return: free
 */
void free_listint(listint_t *head)
{
listint_t *curr = head;

while (curr != NULL)
{
listint_t *next = curr->next;
free(curr);
curr = next;
}
}


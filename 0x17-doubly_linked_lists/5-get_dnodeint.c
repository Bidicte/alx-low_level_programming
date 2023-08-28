#include "lists.h"

/**
* get_dnodeint_at_index - func
* @head: var
* @index: var
* Return: returns the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
if (!head)
return (NULL);
temp = head;
while (index > 0 && temp)
{
index--;
temp = temp->next;
if (!temp)
return (NULL);
}
return (temp);
}

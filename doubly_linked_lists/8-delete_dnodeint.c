#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i;
    dlistint_t *current = *head;

    for (i = 0; i <= index && current != NULL; i++)
    {
        current = current->next;
    }
    current->next = current->next->next;
    current->prev = current;
    current->next->next->prev = current;
    free(current);
    return(1);
}
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i;
    dlistint_t *current = *head;
    dlistint_t *element = *head;

    for (i = 0; i <= index && current != NULL; i++)
    {
        current = current->next;
    }
    current = element->next;
    element->next = current->next;
    current->next->prev = element;
    free(current);
    return(1);
}
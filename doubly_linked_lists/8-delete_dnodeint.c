#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i;
    dlistint_t *current = *head;
    dlistint_t *element;

    for (i = 0; i < index; i++)
    {
        current = current->next;
    }
    current->next = element->next;
    element->next->prev = element->prev;
    free(element);
    return(1);
}
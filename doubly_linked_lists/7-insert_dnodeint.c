#include "lists.h"
/**
* insert_dnodeint_at_index - fonction
* Write a function that inserts a new node at a given position.
* @h: tete de liste
* @idx: indice ou l'on doit créer le nom
* @n: valeur du noeud
* Return: nouveau noeud a l'indice idx
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current = *h;
	dlistint_t *element;

	if (idx == 0)
	{
		element = malloc(sizeof(dlistint_t));
		if (element == NULL)
		{
			return (NULL);
		}
		element->n = n;
        element->next = *h;
        element->prev = NULL;
        if (*h != NULL)
        {
            (*h)->prev = element;
        }
        *h = element;
        return (element);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (current  == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
	{
		return (NULL);
	}
	element->n = n;
	element->next = current->next;
	element->prev = current;
	if (current->next != NULL)
    {
        current->next->prev = element;
    }
	current->next = element;
	return (element);
}

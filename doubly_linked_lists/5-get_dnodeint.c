#include "lists.h"
/**
* get_dnodeint_at_index - fonction
* Write a function that returns the nth node
*  of a dlistint_t linked list.
* @head: tete de la liste
* @index: index du noeud que l'on cherche
* Return: noeud à l'indice index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}

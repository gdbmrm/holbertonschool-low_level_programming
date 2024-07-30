#include "lists.h"

/**
* add_dnodeint_end - fonction
* Write a function that adds a new node
* at the end of a dlistint_t list.
* @head: tete de la liste
* @n: int pour le nouveau noeud
* Return: nouveau noeud
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *element;

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
	{
		return (NULL);
	}

	element->n = n;
	element->next = NULL;

	if (*head == NULL) /* check si la tete n'est pas nulle*/
	{
		*head = element;
	} else
	{
		current = *head;
		while (current->next != NULL) /* tant qu'on est pas a l'avant dernier noeud*/
		{
			current = current->next; /* on avance*/
		}
	current->next = element; /*current pointe sur le nouveau noeud*/
	element->next = NULL; /*le nouveau noeud pointe vers NULL*/
	element->prev = *head;
	}
	return (element);
}

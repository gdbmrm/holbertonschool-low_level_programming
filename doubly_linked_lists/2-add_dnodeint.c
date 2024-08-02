#include "lists.h"
/**
* add_dnodeint - fonction
* Write a function that adds a new node
* at the beginning of a dlistint_t list.
* @head: tete de liste
* @n: element a initialiser
* Return: nouvelle tete de liste
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *element;

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
	{
		return (NULL);
	}

	element->n = n;
	element->prev = NULL;

	if (*head == NULL)
	{
		element->next = NULL;
		*head = element;
	} else
	{
		element->next = *head;
		element->prev = NULL;
		*head = element;
	}

	return (*head);
}

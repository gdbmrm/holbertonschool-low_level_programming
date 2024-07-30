#include "lists.h"
/**
* dlistint_len - fonction
* Write a function that returns the number of elements
* in a linked dlistint_t list.
* @h: noeud
* Return: nombre d'elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

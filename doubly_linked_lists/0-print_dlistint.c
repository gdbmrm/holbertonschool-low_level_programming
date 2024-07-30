#include "lists.h"
/**
* print_dlistint - nom fonction
* Write a function that prints all the elements of a dlistint_t list.
* @h: noeud a liberer
* Return: nombre d'elements de la double liste chainee
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);


}

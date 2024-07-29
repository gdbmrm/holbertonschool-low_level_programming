#include "lists.h"
/**
* list_len - fonction
* Write a function that returns the number of elements
*  in a linked list_t list.
* @h: liste a afficher
* Return: nombre d'elements a afficher
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{

		i++;
		h = h->next;
	}
	return (i);
}

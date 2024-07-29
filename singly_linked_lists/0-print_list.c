#include "lists.h"
/**
* print_list - fonction
* Write a function that prints all the elements
* of a list_t list.
* @h: liste a afficher
* Return: nombre d'elements a afficher
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			h = h->next;
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
			h = h->next;
		}
	}
	return (i);
}

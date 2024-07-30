#include "lists.h"
/**
* free_dlistint - fonction
* Write a function that frees a dlistint_t list.
* at the end of a list_t list.
* @head: noeud a délivrer
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

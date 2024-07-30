#include "lists.h"
/**
* free_list - fonction
* Write a function that adds a new node
* at the end of a list_t list.
* @head: noeud a délivrer
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

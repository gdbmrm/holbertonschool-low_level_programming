#include "lists.h"
/**
* sum_dlistint - fonction
* Write a function that returns the sum
* of all the data (n) of a dlistint_t linked list.
* @head: tete de liste
* Return: somme des noeuds
*/
int sum_dlistint(dlistint_t *head)
{
	int somme = 0;
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		somme += temp->n;

	}
	return (somme);
}

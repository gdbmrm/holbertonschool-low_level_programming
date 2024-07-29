#include "lists.h"

/**
* add_node - fonction qui crée un noeud
* Write a function that adds a new node
* at the beginning of a list_t list.
* @head: first node
* @str: chaine de caractere pour le new node
* Return: nouveau noeud
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *element = malloc(sizeof(list_t));

	if (element == NULL)
	{
		return (NULL);
	}

	element->str = strdup(str);
	element->len = 1;
	element->next = *head;
	*head = element;
	return (element);

}



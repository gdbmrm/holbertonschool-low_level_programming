#include "lists.h"

/**
 * _strlen - fonction qui renvoie la longeur d'un string
 *
 * Write a function that returns the length of a string.
 *
 * @s: string d'entrÃe
 *
 * Return: longeur du string
 */


int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
* add_node_end - fonction
* Write a function that adds a new node at the end of a list_t list.
* @head: tete de la liste
* @str: chaine de cara pour le nouveau noeud
* Return: nouveau noeud
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *element;

	element = malloc(sizeof(list_t));
	if (element == NULL)
	{
		return (NULL);
	}

	element->str = strdup(str);
	if (element->str == NULL)
	{
		free(element);
		return (NULL);
	}

	element->len = _strlen(str);
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
	}
	return (element);
}

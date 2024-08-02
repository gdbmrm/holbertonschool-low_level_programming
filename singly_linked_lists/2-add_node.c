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
	if (*head == NULL)
	{
		*head = element;
	}
	if (str == NULL)
	{
		return (NULL);
	}

	element->str = strdup(str);
	element->len = _strlen(str);
	element->next = *head;
	*head = element;
	return (*head);

}



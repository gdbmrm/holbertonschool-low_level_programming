#include "lists.h"
/**
 * delete_dnodeint_at_index - Supprime le nœud situé à une position
 *                            spécifiée dans une liste doublement chaînée.
 *
 * @head: Un pointeur vers le pointeur de tête de la liste.
 * @index: La position du nœud à supprimer, en commençant par 0 pour le
 *         premier nœud.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 *
 * Description: Cette fonction parcourt la liste doublement chaînée jusqu'à
 *              atteindre le nœud à l'index. Elle met ensuite à jour
 *              les pointeurs 'next' et 'prev' des nœuds adjacents pour
 *              exclure le nœud ciblé de la liste, puis libère la mémoire
 *              allouée pour ce nœud. Si la liste est vide ou si l'index est
 *              hors de portée, elle retourne -1. Elle retourne 1 si la
 *              suppression est réussie.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)/* supp 1st noeud si unique*/
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++) /* avance a l'indice*/
	{
		current = current->next;
	}

	if (current == NULL)/* si out of range*/
	{
		return (-1);
	}

	if (current->next != NULL)/* maj noeud suivant*/
		current->next->prev = current->prev;

	if (current->prev != NULL)/* maj noeud precedent*/
		current->prev->next = current->next;

	free(current);
	return (1);
}

#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* insert_nodeint_at_index -  Function do things
* @head: a pointer of type list_t
* @idx: 2 param
* @n: 3 param
* Return: pointer (Success)
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (aux != NULL && i < idx - 1)
	{
		i++;
		aux = aux->next;
	}
	if (aux == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}

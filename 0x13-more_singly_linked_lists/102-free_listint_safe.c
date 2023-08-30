#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* delete_nodeint_at_index -  Function do things
* @head: a pointer of type list_t
* @index: 2 param
* Return: 1 or -1 (Success)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *new = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		listint_t *temp = *head;

		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (aux != NULL && i < index)
	{
		new = aux;
		aux = aux->next;
		i++;
	}
	if (aux == NULL)
		return (-1);
	new->next = aux->next;
	free(aux);
	return (1);
}

#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* add_nodeint_end -  Function do things
* @head: a pointer of type list_t
* @n: 2 param
* Return: new (Success)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		new->next = NULL;
	}
	return (new);
}

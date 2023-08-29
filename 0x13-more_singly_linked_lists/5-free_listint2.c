#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* free_listint2 -  Function do things
* @head: a pointer of type list_t
* Return: i (Success)
*/

void free_listint2(listint_t **head)
{
	listint_t *position = *head;

	while (position != NULL)
	{
		listint_t *aux = position;

		position = position->next;
		free(aux);
	}
	*head = NULL;
}

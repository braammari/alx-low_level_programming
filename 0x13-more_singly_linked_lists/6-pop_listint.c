#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* print_list -  Function do things
* @h: a pointer of type list_t
* Return: i (Success)
*/


int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *position = *head;
		int n = (*head)->n;

		*head = (*head)->next;
		free(position);
		return (n);
	}
}

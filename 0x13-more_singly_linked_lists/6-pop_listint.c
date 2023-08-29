#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* pop_listint -  Function do things
* @head: a pointer of type list_t
* Return: n (Success)
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

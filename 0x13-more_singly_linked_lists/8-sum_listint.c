#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* sum_listint -  Function do things
* @head: a pointer of type list_t
* Return: S (Success)
*/

int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int S = 0;

	if (head == NULL)
		return (0);
	while (aux != NULL)
	{
		S = S + aux->n;
		aux = aux->next;
	}
	return (S);
}

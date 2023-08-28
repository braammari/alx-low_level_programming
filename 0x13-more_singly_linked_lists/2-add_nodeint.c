#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* add_nodeint -  Function do things
* @head: a pointer of type list_t
* @n: 2 param
* Return: i (Success)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end -  Function do things
* @head: a pointer of type list_t
* @str: 2 param
* Return: new (Success)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	const char *ch;
	list_t *new;

	ch = str;
	new = malloc(sizeof(list_t));
	if (new == NULL || ch == NULL)
		return (NULL);
	new->str = strdup(ch);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(ch);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}

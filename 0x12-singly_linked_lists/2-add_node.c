#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
* add_node -  Function do things
* @head: a pointer of type list_t
* @str: 2 param
* Return: new (Success)
*/

list_t *add_node(list_t **head, const char *str)
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
	new->next = *head;
	*head = new;
	return (new);
}

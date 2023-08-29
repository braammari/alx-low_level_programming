#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* get_nodeint_at_index - Function do things
* @head: a pointer of type list_t
* @index: 2 param
* Return: count or NULL (Success)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *count = head;
	unsigned int i = 0;

	while (count != NULL && i < index)
	{
		i++;
		count = count->next;
	}
	if (count != NULL)
		return (count);
	else
		return (NULL);
}

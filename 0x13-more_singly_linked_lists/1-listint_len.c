#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* listint_len -  Function do things
* @h: a pointer of type list_t
* Return: i (Success)
*/


size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

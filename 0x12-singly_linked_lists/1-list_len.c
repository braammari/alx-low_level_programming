#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* print_list -  Function do things
* @h: a pointer of type list_t
* Return: i (Success)
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

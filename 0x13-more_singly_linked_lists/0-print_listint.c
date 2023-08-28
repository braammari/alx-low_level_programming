#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* print_list -  Function do things
* @h: a pointer of type list_t
* Return: i (Success)
*/


size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n)
		i++;
		h = h->next;
	}
	return (i);
}

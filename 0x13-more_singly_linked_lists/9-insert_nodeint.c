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
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}

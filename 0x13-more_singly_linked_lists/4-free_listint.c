#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* free_listint -  Function do things
* @head: a pointer of type list_t
* Return:  (Success)
*/

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *aux = head;

		head = head->next;
		free(aux);
	}
}

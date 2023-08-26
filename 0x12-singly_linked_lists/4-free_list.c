#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
* free_list -  Function do things
* @head: a pointer of type list_t
* Return: new (Success)
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}

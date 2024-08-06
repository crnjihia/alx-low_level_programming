#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - a function that frees a linked list
 * @head: this is the beginning of the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}

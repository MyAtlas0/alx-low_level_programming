#include "lists.h"

/**
 * free_list - Function that frees the linked list and its elements.
 *
 * @head: A pointer to the head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *temp_node;

	current = head;
	while (current != NULL)
	{
		temp_node = current;
		current = current->next;
		free(temp_node->str);
		free(temp_node);
	}
}

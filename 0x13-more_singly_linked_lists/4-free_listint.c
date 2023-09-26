#include "lists.h"

/**
 * free_listint - Function to free the linked list and its elements.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;
	listint_t *temp_node;

	current_node = head;
	while (current_node != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node);
	}
}

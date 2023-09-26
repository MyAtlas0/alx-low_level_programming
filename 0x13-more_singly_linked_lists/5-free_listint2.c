#include "lists.h"

/**
 * free_listint2 - Function to free the linked list and set the head to NULL.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *temp_node;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	current_node = *head;
	while (current_node != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;

		free(temp_node);
	}
	*head = NULL;
}

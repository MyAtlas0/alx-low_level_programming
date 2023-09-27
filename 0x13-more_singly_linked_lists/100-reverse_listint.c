#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the new head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *current_node = *head;
	listint_t *new_node = NULL;

	while (current_node != NULL)
	{
		new_node = current_node->next;
		current_node->next = old_node;
		old_node = current_node;
		current_node = new_node;
	}
	*head = old_node;

	return (*head);
}

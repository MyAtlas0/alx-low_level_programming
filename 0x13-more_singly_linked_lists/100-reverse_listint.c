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
	listint_t *prev_node;
	listint_t *new_node;

	prev_node = NULL;
	while (*head != NULL)
	{
		new_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = new_node;
	}
	*head = prev_node;

	return (*head);
}

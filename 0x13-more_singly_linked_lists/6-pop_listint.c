#include "lists.h"

/**
 * pop_listint - This function deletes the head node of the linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The element stored in the head node.
 */

int pop_listint(listint_t **head)
{
	int element;
	listint_t *temp_node;

	if (*head == NULL)
	{
		return (0);
	}

	temp_node = *head;
	element = temp_node->n;
	*head = (*head)->next;
	free(temp_node);

	return (element);
}

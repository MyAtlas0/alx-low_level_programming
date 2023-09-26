#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node to a given position in the list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * @idx: The index at which to insert the new node.
 *
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the new node if successful, or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node, *new_node;
	unsigned int current_index = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current_node = *head;
	while (current_node != NULL)
	{
		if (current_index == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;

			return (new_node);
		}
		current_node = current_node->next;
		current_index++;
	}

	free(new_node);
	return (NULL);
}

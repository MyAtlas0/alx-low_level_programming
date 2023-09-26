#include "lists.h"

/**
 * delete_nodeint_at_index - Function to deletes a node at given index in list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * @index: The index of the node to be deleted.
 *
 * Return: Returns 1 if the node was successfully deleted, -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp_node;
	unsigned int current_index = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	current_node = *head;
	while (current_node != NULL)
	{
		if (current_index == index - 1)
		{
			if (current_node->next == NULL)
			{
				return (-1);
			}
			temp_node = current_node->next;
			current_node->next = temp_node->next;
			free(temp_node);
			return (1);
		}
		current_node = current_node->next;
		current_index++;
	}

	return (-1);
}

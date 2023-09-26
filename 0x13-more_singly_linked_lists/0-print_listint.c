#include "lists.h"

/**
 * print_listint - Prints all elements of the linked list and counts the nodes.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", h->n);
		}

		h = h->next;
		node_count++;
	}

	return (node_count);
}


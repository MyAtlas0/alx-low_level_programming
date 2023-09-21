#include "lists.h"

/**
 * print_list - Function to print all elements of the list counts the nodes.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", strlen(h->str), h->str);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}

#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head;
	const listint_t *fast_ptr = head;
	int loop_detected = 0;
	size_t node_count = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		node_count++;

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			loop_detected = 1;
			break;
		}
	}

	if (loop_detected)
	{
		fast_ptr = head;
		while (slow_ptr != fast_ptr)
		{
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			node_count++;
			slow_ptr = slow_ptr->next;
			fast_ptr = fast_ptr->next;
		}
		printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
	}

	return (node_count);
}

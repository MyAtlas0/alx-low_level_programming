#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely, even with a loop.
 *
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *slow_ptr = *h;
	listint_t *fast_ptr = *h;
	listint_t *temp = NULL;
	listint_t *loop_start = NULL;
	int loop_detected = 0;
	size_t size = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			loop_detected = 1;
			loop_start = slow_ptr;
			break;
		}
	}

	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
		size++;

		if (current == loop_start && loop_detected)
			break;
	}
	*h = NULL;

	return (size);
}

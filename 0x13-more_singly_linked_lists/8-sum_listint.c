#include "lists.h"

/**
 * sum_listint - Calculates sum of all data values in the linked list.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all data values, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

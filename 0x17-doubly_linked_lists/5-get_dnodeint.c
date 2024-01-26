#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: pointer to head of list
 * @index: index of node to return
 *
 * Return: address of nth node or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (counter == index)
			return (head);

		head = head->next;
		counter++;
	}

	return (NULL);
}

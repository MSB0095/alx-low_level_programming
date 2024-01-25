#include "lists.h"

/**
 * dlistint_len - returns the num of elements
 * in a linked dlistint_t list
 * 
 * @h: pointer to head of list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

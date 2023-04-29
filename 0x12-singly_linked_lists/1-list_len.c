#include "lists.h"

/**
 * list_len -  a function that returns the number
 *  of elements in a linked list_t list.
 *
 * @h: the list to count
 *
 * Return: the number
 *  of elements
*/

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}

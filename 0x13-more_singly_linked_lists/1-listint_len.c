#include "lists.h"

/**
 * listint_len -  a function that returns the lenght
 *
 * @h: the listint_t to calculate
 *
 * Return: the size of the list as a size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}

	return (s);
}

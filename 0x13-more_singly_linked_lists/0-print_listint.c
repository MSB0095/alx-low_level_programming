#include "lists.h"

/**
 * print_listint -  a function that prints
 * all the elements of a listint_t list.
 *
 * @h: the listint_t to print
 *
 * Return: the size of the list as a size_t
*/

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		s++;
	}

	return (s);
}

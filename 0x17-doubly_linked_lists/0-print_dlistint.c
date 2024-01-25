#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pointer;
	size_t counter;

	counter = 0;
	if (h)
	{
		pointer = h;
		while (pointer != NULL)
		{
			printf("%d\n", pointer->n);
			counter++;
			pointer = pointer->next;
		}
	}
	return (counter);
}

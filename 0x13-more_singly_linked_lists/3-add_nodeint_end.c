#include "lists.h"

/**
 * add_nodeint_end -  a function that adds
 *  a new node at the end of a listint_t list.
 *
 * @head: an address of a pointer to head
 *
 * @n: the int to add in the las node
 *
 * Return: a poointer to the newly created node
 * or NULL if failed
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = new;
	return (new);
}

#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 *  at the beginning of a listint_t list.
 *
 * @head: the head of the list
 * @n: the data of the list to add
 *
 * Return: the address of the new element,
 * or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new->n = n;
	new->next = head;

	return (new);

}

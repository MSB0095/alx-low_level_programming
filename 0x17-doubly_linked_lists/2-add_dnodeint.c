#include "lists.h"
/**
 * add_dnodeint - adds a new node at the
 * beginning of a dlistint_t list
 *
 * @head: pointer to head of list
 * @n: data to add to new node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head)
	{
		newnode = malloc(sizeof(dlistint_t));
		if (newnode)
		{
			newnode->n = n;
			newnode->next = *head;
			newnode->prev = NULL;
			if (*head)
				(*head)->prev = newnode;
			*head = newnode;
			return (newnode);
		}
		return (NULL);
	}
	return (NULL);
}

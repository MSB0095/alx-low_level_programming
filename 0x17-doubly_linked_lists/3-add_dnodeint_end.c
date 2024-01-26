#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the
 * end of a dlistint_t list
 * @head: pointer to head of list
 * @n: data to add to new node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	if (head)
	{
		newnode = malloc(sizeof(dlistint_t));
		if (newnode)
		{
			newnode->n = n;
			newnode->next = NULL;
			if (*head == NULL)
			{
				newnode->prev = NULL;
				*head = newnode;
				return (newnode);
			}
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = newnode;
			newnode->prev = temp;
			return (newnode);
		}
		return (NULL);
	}
	return (NULL);
}

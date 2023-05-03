#include "lists.h"

/**
 * sum_listint - sums the data of a list
 * @head: the list
 * Return: the sum or 0 if empty list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

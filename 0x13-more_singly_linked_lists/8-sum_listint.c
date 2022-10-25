#include "lists.h"
/**
 * sum_listint - sum of value in each node
 * @head: head of node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

#include "lists.h"
/**
 * sum_listint - sum of value in each node
 * @head: head of node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

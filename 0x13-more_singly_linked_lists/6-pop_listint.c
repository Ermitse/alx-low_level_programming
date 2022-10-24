#include "lists.h"
/**
 * pop_listint - delete and return data of head node
 * @head: nde
 * Return: val
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

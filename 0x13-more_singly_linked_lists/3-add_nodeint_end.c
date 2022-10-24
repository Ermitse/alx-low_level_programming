#include "lists.h"
/**
 * add_nodeint_end - add node at the end of the list
 * @head: head of the node
 * @n: linked list
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *temp;

	end = *head;
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
			return (temp);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = temp;
	return (temp);
}

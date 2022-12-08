#include "lists.h"
/**
 * add_dnodeint - add node at beg
 * @head: head of list
 * @n: int
 * Return: ret address or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		*head->next = NULL;
	*head = new;
	return (new);

#include "lists.h"
/**
 * add_nodeint - add node at beggining
 * @head: head of node
 * @n: llinked list
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beg;

	beg = malloc(sizeof(listint_t));
	beg->n = n;


	beg->next = *head;
	*head = beg;
	return (*head);
}

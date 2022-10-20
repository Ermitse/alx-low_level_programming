#include "lists.h"

/**
 * add_node - add node at beggining
 * @head: pointer to the head
 * @str: str to br added to list_t
 * Return: null if fail else address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}

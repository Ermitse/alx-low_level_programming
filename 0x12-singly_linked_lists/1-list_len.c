#include "lists.h"
/**
 * list_len - find num of element in linked list
 * @h: linked list
 * Return: num of element
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

#include "lists.h"
/**
 * print_listint - counts number of node and prints it
 * @h: pointer
 * Return: val
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

#include "lists.h"
/**
 * print_listint - counts number of node and prints it
 * @h: pointer
 * Return: val
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		
		h = h->next;
	}
	return (count);
}

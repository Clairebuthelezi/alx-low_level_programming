#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		do {
			printf("%d\n", h->n);
			h = h->next;
			count++;
		} while (h != NULL);
	}
	return (count);
}

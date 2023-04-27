#include "lists.h"

/**
 * size_t list_len - the function to print
 * @h: parameter
 * Return: the number of link
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}

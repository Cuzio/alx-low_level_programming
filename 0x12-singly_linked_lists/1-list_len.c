#include "lists.h"

/**
 * size_t list_len - the function to print
 * @h: parameter
 * Return: the number of link
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->link;
		count++;
	}
	return (count);
}

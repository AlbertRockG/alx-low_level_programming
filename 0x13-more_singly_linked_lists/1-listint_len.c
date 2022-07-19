#include "lists.h"
#include <stdio.h>

/**
 * listint_len - It returns the number of elements
 *               in a linked listint_t list.
 * @h: The given linked listint_t list.
 *
 * Return: The number of elements in a linked
 *         listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

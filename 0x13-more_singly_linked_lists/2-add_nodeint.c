#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - It add a new node at the beginning
 *               of a listint_t list.
 * @head: The head of the linked listint_t list.
 * @n: The integer to add.
 *
 * Return: NULL, if it failed.
 *         The address of the new element, if ok.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}

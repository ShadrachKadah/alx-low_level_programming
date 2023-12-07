#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Value of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *current = *h;

	if (idx == 0)
	return add_dnodeint(h, n); // Use add_dnodeint to insert at the beginning

	while (current != NULL && count < idx - 1)
	{
	current = current->next;
	count++;
	}

	if (current == NULL) // Index out of range
	return NULL;

    // Create new node
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return NULL;

	new_node->n = n;

	if (current->next != NULL)
	current->next->prev = new_node;

	ew_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;

	return new_node;
}

#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @current: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **current)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*current)
	{
	next = (*current)->next;
	(*current)->next = prev;
	prev = *current;
	*current = next;
	}

	*current = prev;

	return (*current);
}

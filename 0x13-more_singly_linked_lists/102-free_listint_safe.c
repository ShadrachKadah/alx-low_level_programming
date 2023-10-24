#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *current;

	if (h == NULL || *h == NULL)
	return (0);

	while (*h)
	{
	diff = *h - (*h)->next;
	if (diff > 0)
	{
	current = (*h)->next;
	free(*h);
	*h = current;
	len++;
	}
	else
	{
	free(*h);
	*h = NULL;
	len++;
	break;
	}
	}

	*h = NULL;

	return (len);
}

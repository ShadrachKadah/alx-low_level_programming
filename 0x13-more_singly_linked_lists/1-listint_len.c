#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @y: A pointer to the head of the linked list
 *
 * Return: number of element in the  nodes
 */
size_t listint_len(const listint_t *y)
{
	size_t count = 0;

	while (y != NULL)
	{
	count++;
	y = y->next;
	}

	return (count);
}

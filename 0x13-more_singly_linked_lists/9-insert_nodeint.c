#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @bbn: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int bbn, int n)
{
unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (bbn == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	for (i = 0; current && i < bbn; i++)
	{
	if (i == bbn - 1)
	{
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
	}
	else
	current = current->next;
	}
	return (NULL);
}

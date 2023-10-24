#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: The data (n) of the deleted head node, or 0 if the
 * linked list is empty,
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (!head || !*head)
	return (0);

	current = *head;
	data = current->n;
	*head = (*head)->next;
	free(current);

	return (data);
}

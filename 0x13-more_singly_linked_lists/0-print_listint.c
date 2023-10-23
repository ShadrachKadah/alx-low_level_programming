#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @x: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *x)
{
	size_t num = 0;

	while (x)
	{
	printf("%d\n", x->n);
	num++;
	x = x->next;
	}

	return (num);
}

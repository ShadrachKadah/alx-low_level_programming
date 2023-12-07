#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp = *h, *new_node;

    /* Allocate memory for the new node. */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    /* Set the value of the new node. */
    new_node->n = n;

    /* If the index is 0, insert at the beginning of the list. */
    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    /* Traverse the list to reach the desired position. */
    for (; idx != 1; idx--)
    {
        if (tmp == NULL)
        {
            free(new_node);
            return (NULL);
        }
        tmp = tmp->next;
    }

    /* If the desired position is at the end, insert at the end of the list. */
    if (tmp->next == NULL)
    {
        new_node->next = NULL;
        new_node->prev = tmp;
        tmp->next = new_node;
        return (new_node);
    }

    /* Set the links for the new node and update the adjacent nodes' links. */
    new_node->next = tmp->next;
    new_node->prev = tmp;
    tmp->next->prev = new_node;
    tmp->next = new_node;

    return (new_node);
}


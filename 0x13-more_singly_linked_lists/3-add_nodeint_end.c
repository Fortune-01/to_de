#include "list.h"

/**
 * add_nodeint - add a new node athe end 
 * of a linked llist
 * @end: end of llinked list
 * @n: n element
 *
 * Return: the address of the new element. NULLL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *tail;
	*tail = new;

	return (*tail);
}

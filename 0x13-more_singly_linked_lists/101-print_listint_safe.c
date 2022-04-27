#include "lists.h"

/**
 * add_nodeptr - add an element at the beginning of a list of pointers
 * @head: a pointer to a pointer to the first node
 * @p: the element to add
 *
 * Return: If memory allocation fails or head is NULL, return NULL.
 * Otherwise, return the address of the new node.
 */

listptr_t *add_nodeptr(listptr_t **head, const listint_t *p)
{
	listptr_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listptr_t));
	if (!new)
		return (NULL);

	new->p = p;
	new->next = *head;
	*head = new;
	return (new);
}

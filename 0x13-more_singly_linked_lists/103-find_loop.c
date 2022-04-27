#include "lists.h"

/**
 * find_listint_loop - find the beginning of a loop in a linked list
 * @head: a pointer to the first node
 *
 * Return: a pointer to first node in the loop, or NULL if no loop exists
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head ? head->next : NULL, *fast = slow;

	if (fast)
	{
		fast = fast->next;
		while (fast && fast != slow && (fast = fast->next))
		{
			fast = fast->next;
			slow = slow->next;
		}
		if (fast)
		{
			while (fast != head)
			{
				fast = fast->next;
				head = head->next;
			}
		}
	}
	return (fast);
}

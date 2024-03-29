#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;

	listint_t *a = head;

	while (a && m < index)
	{
		a = a->next;
		m++;
	}
	return (a ? a : NULL);
}

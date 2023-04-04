#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a listint_t
 * list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a = *head;

	listint_t *b = NULL;

	unsigned int m = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}
	while (m < index - 1)
	{
		if (!a || !(a->next))
			return (-1);
		a = a->next;
		m++;
	}
	b = a->next;
	a->next = b->next;
	free(b);
	return (1);
}

#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first element in the linked list
 *Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *a;

	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;
	return (i);
}

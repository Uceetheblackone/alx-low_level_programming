#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: pointer to the first node
 * @n: input value in the new node
 * Return: pointer to the new node when it is successful  or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	listint_t *a = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (a->next)
		a = a->next;
	a->next = new;
	return (new);
}

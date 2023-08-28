#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));

	if (!head || !i)
		return (NULL);

	i->next = NULL;
	i->n = n;
	if (*head)
		i->next = *head;
	*head = i;
	return (i);
}

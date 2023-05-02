#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *						   index of a listint_t list.
 * @head: A pointer to the address of the
 *		head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *		 On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;

	free(current);
	return (1);
}

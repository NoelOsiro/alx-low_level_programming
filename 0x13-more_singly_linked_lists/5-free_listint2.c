#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *occur;
	listint_t *tmp;

	if (!head)
		return;
	occur = *head;
	while (occur)
	{
		tmp = occur;
		occur = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}

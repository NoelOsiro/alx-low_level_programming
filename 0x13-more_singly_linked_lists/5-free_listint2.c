#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *		head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *occur = *head;
	listint_t *temp;

	while (occur != NULL)
	{
		temp = occur;
		occur = occur->next;
		free(temp);
	}

	*head = NULL;
}

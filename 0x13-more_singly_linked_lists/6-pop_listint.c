#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to head of list;
 * Return: value at head
 */
int pop_listint(listint_t **head)
{
	listint_t *occur;
	int res;

	if (!(*head) || !head)
		return (0);
	occur = *head;
	res = occur->n;
	*head = (*head)->next;
	free(occur);
	return (res);
}

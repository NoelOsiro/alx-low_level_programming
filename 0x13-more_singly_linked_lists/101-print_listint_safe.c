#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (hare == tortoise)
		{
			printf("-> [%p] %d\n", (void *)hare, hare->n);
			count++;
			break;
		}
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	if (hare == NULL || hare->next == NULL)
	{
		while (tortoise != NULL)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
		}
	}
	else
	{
		tortoise = tortoise->next;
		while (tortoise != hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
		}
		printf("-> [%p] %d\n", (void *)hare, hare->n);
		count++;
	}
	return (count);
}

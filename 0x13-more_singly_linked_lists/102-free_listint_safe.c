#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *					 can free lists containing loops)
 * @h: A pointer to the address of
 *	 the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	return (count);
}


#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *tortoise = head, *hare = head;
    size_t count = 0;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
            count++;
            tortoise = tortoise->next;
            while (tortoise != hare)
            {
                printf("[%p] %d\n", (void *)tortoise, tortoise->n);
                count++;
                tortoise = tortoise->next;
            }
            break;
        }

        count++;
    }

    return count;
}


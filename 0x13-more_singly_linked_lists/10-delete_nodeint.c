#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *preview;
	listint_t *next;

	preview = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && preview != NULL; i++)
		{
			preview = preview->next;
		}
	}

	if (preview == NULL || (preview->next == NULL && index != 0))
	{
		return (-1);
	}

	next = preview->next;

	if (index != 0)
	{
		preview->next = next->next;
		free(next);
	}
	else
	{
		free(preview);
		*head = next;
	}

	return (1);
}

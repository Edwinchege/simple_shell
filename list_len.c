#include "shell.h"

/**
 * list_len - calculates length of a linked list
 * @h: pointer to the head of linked list
 *
 * Return: size of linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

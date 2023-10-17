#include "shell.h"

/**
 * print_list_str - prints strings in linked list to stdout
 * @h: pointer to the head of linked list
 *
 * Return: number of elements printed
 */
size_t print_list_str(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	return (i);
}

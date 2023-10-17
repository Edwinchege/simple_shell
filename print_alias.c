#include "shell.h"

/**
 * print_alias - prints the value of an alias
 * @node: pointer to a node in a linked list
 *
 * Return: 0 (successful), 1 (error)
 */
int print_alias(list_t *node)
{
	char *p = NULL, *a = NULL;

	if (node)
	{
		p = _strchr(node->str, '=');
		for (a = node->str; a <= p; a++)
			_putchar(*a);
		_putchar('\'');
		_puts(p + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}

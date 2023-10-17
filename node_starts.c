#include "shell.h"

/**
* node_starts_with - searches for specicific prefix in linked list
* @node: pointer to the head of a linked list
* @prefix: prefix to search for
* @c: character to check
*
* Return: matching node or null
*/
list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
		{
			return (node);
		}
		node = node->next;
	}
	return (NULL);
}

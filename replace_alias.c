#include "shell.h"

/**
 * replace_alias - replaces a command name with its alias
 * @info: address of the structure
 *
 * Return: 1 successful, otherwise 0
 */
int replace_alias(info_t *info)
{
	int i;
	list_t *node;
	char *p;

	for (i = 0; i < 10; i++)
	{
		node = node_starts_with(info->alias, info->argv[0], ' = ');
		if (!node)
		{
			return (0);
		}
		free(info->argv[0]);
		p = _strchr(node->str, ' = ');
		p = _strdup(p + 1);
		info->argv[0] = p;
	}
	return (1);
}

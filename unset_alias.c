#include "shell.h"

/**
 * unset_alias - removes an alias from a linked list of aliases
 * @info: address of the structure
 * @str: string with alias to unset
 *
 * Return: 1 (error)
 */
int unset_alias(info_t *info, char *str)
{
	char *p, c;
	int ret;

	p = _strchr(str, ' = ');
	if (!p)
	{
		return (1);
	}
	c = *p;
	*p = 0;
	ret = delete_node_at_index(&(info->alias)
	get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
	*p = c;
	return (ret);
}

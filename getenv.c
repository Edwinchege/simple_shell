#include "shell.h"

/**
 * _getenv -search and retrieve value of an environment variable
 * @info: address of a structure
 * @name: name of environment variable
 *
 * Return: value of the variable
 */
char *_getenv(info_t *info, const char *name)
{
	list_t *node = info->env;
	char *p;

	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
		{
			return (p);
		}
		node = node->next;
	}
	return (NULL);
}

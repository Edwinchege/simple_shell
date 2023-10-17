#include "shell.h"

/**
 * set_alias - defines and updates aliases
 * @info: address of the structure
 * @str: input string
 *
 * Return: 0 successful, 1 error
 */
int set_alias(info_t *info, char *str)
{
	char *p;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	if (!*++p)
		return (set_alias(info, str));

	set_alias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

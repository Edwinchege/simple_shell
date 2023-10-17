#include "shell.h"

/**
 * renumber_history - renumbers history entries
 * @info: address of the structure
 *
 * Return: updated number of history entries
 */
int renumber_history(info_t *info)
{
	list_t *node = info->history;
	int i = 0;

	while (node)
	{
		node->num = i++;
		node = node->next;
	}
	return (info->histcount = i);
}

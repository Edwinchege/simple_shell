#include "shell.h"

/**
 * build_history_list - builds a history list of commands
 * @info: address to a structure with needed info
 * @buf: buffer
 * @linecount: line count of history entry
 *
 * Return: Always 0
 */
int build_history_list(info_t *info, char *buf, int linecount)
{
	list_t *node = NULL;

	if (info->history)
		node = info->history;
	add_node_end(&node, buf, linecount);

	if (!info->history)
		info->history = node;
	return (0);
}

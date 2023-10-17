#include "shell.h"
/**
 * is_chain - checks for specific command operators in a buffer
 * @info: address of the structure
 * @buf: character buffer
 * @p: current index in the buffer
 *
 * Return: 1 success, otherwise 0
 */
int is_chain(info_t *info, char *buf, size_t *p)
{
	size_t j = *p;

	if (buf[j] == '|' && buf[j + 1] == '|')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = CMD_OR;
	}
	else if (buf[j] == '&' && buf[j + 1] == '&')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = CMD_AND;
	}
	else if (buf[j] == ';')
	{
		buf[j] = 0;
		info->cmd_buf_type = CMD_CHAIN;
	}
	else
	{
		return (0);
	}
	*p = j;
	return (1);
}

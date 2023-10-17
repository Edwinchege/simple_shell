#include "shell.h"

/**
 * check_chain - checks for conditions to manipulate info
 * @info: address to a structure with needed info
 * @buf: character buffer
 * @p: address of size_t
 * @i: size_t variable
 * @len: size_t length
 *
 * Return: Void
 */
void check_chain(info_t *info, char *buf, size_t *p, size_t i, size_t len)
{
	size_t j = *p;

	if (info->cmd_buf_type == CMD_AND)
	{
		if (info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	if (info->cmd_buf_type == CMD_OR)
	{
		if (!info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	*p = j;
}

#include "shell.h"

/**
* free_info - frees memory of a structure
* @info: address of the structure
* @all: if 0, perform partial cleanup
*/
void free_info(info_t *info, int all)
{
	ffree(info->argv);
	info->argv = NULL;
	info->path = NULL;
	if (all)
	{
		if (!info->cmd_buf)
		{
			free(info->arg);
		}
		if (info->history)
		{
			free_list(&(info->history));
		}
		ffree(info->environ);
		info->environ = NULL;
		bfree((void **)info->cmd_buf);
		_putchar(BUF_FLUSH);
	}
}

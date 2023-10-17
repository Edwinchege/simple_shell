#include "shell.h"

/**
 * hsh - main loop handling various tasks
 * @info: address of the structure
 * @av: command line arguments
 *
 * Return: 0 success, 1 error or error code
 */
int hsh(info_t *info, char **av)
{
	ssize_t r = 0;
	int builtin_ret = 0;

	while (r != -1 && builtin_ret != -2)
	{
		clear_info(info);
		if (interactive(info))
		{
			_puts("$ ");
		}
		_eputchar(BUF_FLUSH);
		r = get_input(info);
		if (r != -1)
		{
			set_info(info, av);
			builtin_ret = find_builtin(info);
			if (builtin_ret == -1)
			{
				find_cmd(info);
			}
		}
		free_info(info, 0);
	}
	write_history(info);
	free_info(info, 1);
	if (!interactive(info) && info->status)
	{
		exit(info->status);
	}
	if (builtin_ret == -2)
	{
		exit(info->err_num);
	}
	return (builtin_ret);
}

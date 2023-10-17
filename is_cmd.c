#include "shell.h"

/**
 * is_cmd - checks if a path corresponds to a regular file
 * @info: address of the structure
 * @path: file path to check
 *
 * Return: 1 success, otherwise 0
 */
int is_cmd(info_t *info, char *path)
{
	struct stat st;

	(void)info;
	if (!path || stat(path, &st))
	{
		return (0);
	}
	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}

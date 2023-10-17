#include "shell.h"
/**
 * read_history - reads command history from a file
 * @info: address of the structure
 *
 * Return: total number of history entries
 */
int read_history(info_t *info)
{
	int i, last = 0, linecount = 0;
	ssize_t fd, rdlen, fsize = 0;
	struct stat st;
	char *buf = NULL, *filename = get_history_file(info);

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	free(filename);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (fsize + 1));
	rdlen = read(fd, buf, fsize);
	buf[fsize] = 0;
	if (rdlen <= 0)
	{
		return (free(buf), 0);
	}
	close(fd);
	for (i = 0; i < fsize; i++)
	if (buf[i] == '\n')
	{
		buf[i] = 0;
		build_history_list(info, buf + last, linecount++);
		last = i + 1;
	}
	free(buf);
	info->histcount = linecount;
	while (info->histcount-- >= HIST_MAX)
	delete_node_at_index(&(info->history), 0);
	renumber_history(info);
	return (info->histcount);
}

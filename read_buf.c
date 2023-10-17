#include "shell.h"

/**
* read_buf - reads data from a fd and stores it in a buffer
* @info: address of the structure
* @buf: buffer
* @i: number of bytes read
*
* Return: value of total number of bytes read
*/
ssize_t read_buf(info_t *info, char *buf, size_t *i)
{
	ssize_t r = 0;

	if (*i)
	{
		return (0);
	}
	r = read(info->readfd, buf, READ_BUF_SIZE);
	if (r >= 0)
	{
		*i = r;
	}
	return (r);
}

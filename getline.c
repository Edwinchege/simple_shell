#include "shell.h"

/**
 * _getline - reads input data from a file descriptor
 * @info: address of a structure
 * @ptr: address of the input buffer
 * @length: length of the input buffer
 *
 * Return: s
 */
int _getline(info_t *info, char **ptr, size_t *length)
{
	static char buf[READ_BUF_SIZE];
	static size_t i, len;
	size_t k;
	ssize_t r = 0, s = 0;
	char *p = NULL, *new_p = NULL, *c;

	p = *ptr;
	if (p && length)
	{
		s = *length;
	}
	if (i == len)
	{
		i = len = 0;
	}
	r = read_buf(info, buf, &len);
	c = _strchr(buf + i, '\n');
	k = c ? 1 + (unsigned int)(c - buf) : len;
	new_p = _realloc(p, s, s ? s + k : k + 1);
	if (!new_p)
	{
		return (p ? free(p), -1 : -1);
	}
	s += k - i;
	i = k;
	p = new_p;
	*ptr = p;
	return (s);
}

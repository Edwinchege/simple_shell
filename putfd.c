#include "shell.h"

/**
* _putfd - the function name
* @c: parameter of type char .
* @fd: parameter of type int .
* Return: int .
*/
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	return (1);
}

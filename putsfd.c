#include "shell.h"

/**
* _putsfd - the function name
* @str: parameter of type char *.
* @fd: parameter of type int .
* Return: int .
*/
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
	{
		return (0);
	}
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}

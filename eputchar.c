#include "shell.h"

/**
* _eputchar - the function name
* @c: parameter of type char .
* Return: int .
*/
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	return (1);
}

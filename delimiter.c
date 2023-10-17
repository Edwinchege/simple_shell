#include "shell.h"

/**
* is_delim - the function name
* @c: parameter of type char .
* @delim: parameter of type char *.
* Return: int .
*/
int is_delim(char c, char *delim)
{
	while (*delim)
	if (*delim++ == c)
	{
		return (1);
	}
	return (0);
}

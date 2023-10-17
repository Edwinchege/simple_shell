#include "shell.h"

/**
* replace_string - the function name
* @old: parameter of type char **.
* @new: parameter of type char *.
* Return: int .
*/
int replace_string(char **old, char *new)
{
	free(*old);
	*old = new;
	return (1);
}

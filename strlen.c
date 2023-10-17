#include "shell.h"

/**
* _strlen - the function name
* @s: parameter of type char *.
* Return: int .
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	i++;
	return (i);
}

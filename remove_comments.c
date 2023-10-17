#include "shell.h"

/**
* remove_comments - the function name
* @buf: parameter of type char *.
* Return: void .
*/
void remove_comments(char *buf)
{
	int i;

	for (i = 0; buf[i] != '\0'; i++)
	if (buf[i] == '#' && (!i || buf[i - 1] == ' '))
	{
		buf[i] = '\0';
		break;
	}
}

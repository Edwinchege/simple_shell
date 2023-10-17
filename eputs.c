#include "shell.h"

/**
* _eputs - the function name
* @str: parameter of type char *.
* Return: void .
*/
void _eputs(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

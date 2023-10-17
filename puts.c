#include "shell.h"

/**
* _puts - the function name
* @str: parameter of type char *.
* Return: void .
*/
void _puts(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

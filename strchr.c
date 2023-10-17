#include "shell.h"

/**
* _strchr - the function name
* @s: parameter of type char *.
* @c: parameter of type char .
* Return: char *.
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
		} while (*s++ != '\0');
		return (NULL);
	}

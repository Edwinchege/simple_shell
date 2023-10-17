#include "shell.h"

/**
* _strdup - the function name
* @str: parameter of type const char *.
* Return: char *.
*/
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str++)
	length++;
	ret = malloc(sizeof(char) * (length + 1));
	for (length++; length--;)
	ret[length] = *--str;
	return (ret);
}

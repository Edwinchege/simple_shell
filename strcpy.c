#include "shell.h"

/**
* _strcpy - the function name
* @dest: parameter of type char *.
* @src: parameter of type char *.
* Return: char *.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
	{
		return (dest);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

#include "shell.h"

/**
* _strcat - the function name
* @dest: parameter of type char *.
* @src: parameter of type char *.
* Return: char *.
*/
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
	dest++;
	while (*src)
	*dest++ = *src++;
	*dest = *src;
	return (ret);
}

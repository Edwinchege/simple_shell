#include "shell.h"

/**
* _strncat - the function name
* @dest: parameter of type char *.
* @src: parameter of type char *.
* @n: parameter of type int .
* Return: char *.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
	{
		dest[i] = '\0';
	}
	return (s);
}

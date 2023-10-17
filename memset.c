#include "shell.h"

/**
**_memset - fills memory with a given byte value
*@s: pointer to the memory area
*@b: byte value to fill into memmory
*@n: number of bytes to be filled
*Return: original pointer, s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}

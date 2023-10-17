#include "shell.h"

/**
* dup_chars - the function name
* @pathstr: parameter of type char *.
* @start: parameter of type int .
* @stop: parameter of type int .
* Return: char *.
*/
char *dup_chars(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int i = 0, k = 0;

	for (k = 0, i = start; i < stop; i++)
	if (pathstr[i] != ':')
	{
		buf[k++] = pathstr[i];
	}
	buf[k] = 0;
	return (buf);
}

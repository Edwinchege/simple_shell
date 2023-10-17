#include "shell.h"

/**
* starts_with - the function name
* @haystack: parameter of type const char *.
* @needle: parameter of type const char *.
* Return: char *.
*/
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
	if (*needle++ != *haystack++)
	{
		return (NULL);
	}
	return ((char *)haystack);
}

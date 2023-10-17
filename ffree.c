#include "shell.h"

/**
* ffree - frees memory for array of strings
* @pp: pointer to an array of strings
*/
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
	{
		return;
	}
	while (*pp)
	free(*pp++);
	free(a);
}

#include "shell.h"

/**
* bfree - the function name
* @ptr: parameter of type void **.
* Return: int .
*/
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

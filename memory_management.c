#include "shell.h"

/**
 * bfree - frees memory of a pointer and sets it to null
 * @ptr: address of the pointer
 *
 * Return: 1 success, otherwise 0.
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

#include "shell.h"

/**
* _realloc - the function name
* @ptr: parameter of type void *.
* @old_size: parameter of type unsigned int .
* @new_size: parameter of type unsigned int .
* Return: void *.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (!new_size)
	{
		return (free(ptr), NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
	p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}

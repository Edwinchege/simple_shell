#include "shell.h"

/**
* _myunsetenv - Removes or unsets environment variable
* @info: address of the structure
*  Return: Always 0
*/
int _myunsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		_eputs("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
	_unsetenv(info, info->argv[i]);
	return (0);
}

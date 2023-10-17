#include "shell.h"

/**
* _myhelp - provides usage information about the program
* @info: address of the structure
*  Return: Always 0
*/
int _myhelp(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;
	_puts("help call works. Function not yet implemented \n");
	if (0)
	{
		_puts(*arg_array);
	}
	return (0);
}

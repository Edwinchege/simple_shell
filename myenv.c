#include "shell.h"

/**
* _myenv - displays the environment variables
* @info: address of the structure
* Return: Always 0
*/
int _myenv(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

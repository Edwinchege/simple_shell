#include "shell.h"

/**
* _myhistory - displays the command history
* @info: address of the structure
*  Return: Always 0
*/
int _myhistory(info_t *info)
{
	print_list(info->history);
	return (0);
}

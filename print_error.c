#include "shell.h"

/**
* print_error - prints an error message to standard error
* @info: address to the structure
* @estr: string with specific error message
* Return: error message
*/
void print_error(info_t *info, char *estr)
{
	_eputs(info->fname);
	_eputs(": ");
	print_d(info->line_count, STDERR_FILENO);
	_eputs(": ");
	_eputs(info->argv[0]);
	_eputs(": ");
	_eputs(estr);
}

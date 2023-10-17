#include "shell.h"

/**
* clear_info - clear certain fields within the structure
* @info: address to a structure
*/
void clear_info(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	info->argc = 0;
}

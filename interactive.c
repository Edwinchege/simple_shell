#include "shell.h"

/**
 * interactive - checks for a interactive terminal session
 * @info: address of the structure
 *
 * Return: 1 (interactive), otherwise 0
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

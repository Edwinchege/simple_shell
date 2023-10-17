#include "shell.h"

/**
 * sigintHandler - prints a new line after any interuption
 * @sig_num: integer argument
 *
 * Return: void
 */
void sigintHandler(__attribute__((unused))int sig_num)
{
	_puts("\n");
	_puts("$ ");
	_putchar(BUF_FLUSH);
}

#include "shell.h"

/**
* _isalpha - the function name
* @c: parameter of type int .
* Return: int .
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

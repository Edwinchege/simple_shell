#include "shell.h"

/**
* print_d - the function name
* @input: parameter of type int .
* @fd: parameter of type int .
* Return: int .
*/
int print_d(int input, int fd)
{
	int (*__putchar)(char) = _putchar;
	int i, count = 0;
	unsigned int _abs_, current;

	if (fd == STDERR_FILENO)
	{
		__putchar = _eputchar;
	}
	if (input < 0)
	{
		_abs_ = -input;
		__putchar('-');
		count++;
	}
	current = _abs_;
	for (i = 1000000000; i > 1; i /= 10)
	{
		if (_abs_ / i)
		{
			__putchar('0' + current / i);
			count++;
		}
		current %= i;
	}
	__putchar('0' + current);
	count++;
	return (count);
}

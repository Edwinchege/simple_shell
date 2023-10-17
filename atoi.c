#include "shell.h"

/**
*_atoi - converts a string to an actual integer
*@s: string containing an integer
*Return: integer value
*/
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
	}
	if (sign == -1)
	{
		output = -result;
	}
	else
	{
		output = result;
	}
	return (output);
}

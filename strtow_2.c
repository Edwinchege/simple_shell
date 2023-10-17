#include "shell.h"

/**
* strtow2 - the function name
* @str: parameter of type char *.
* @d: parameter of type char .
* Return: char **.
*/
char **strtow2(char *str, char d)
{
	int i, j, k, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	numwords++;
	if (numwords == 0)
	{
		return (NULL);
	}
	s = malloc((1 + numwords) * sizeof(char *));
	for (i = 0, j = 0; j < numwords; j++)
	{
		while (str[i] == d && str[i] != d)
		i++;
		k = 0;
		while (str[i + k] != d && str[i + k] && str[i + k] != d)
		k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
			free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
		s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	return (s);
}

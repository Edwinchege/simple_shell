#include "shell.h"

/**
* strtow - the function name
* @str: parameter of type char *.
* @d: parameter of type char *.
* Return: char **.
*/
char **strtow(char *str, char *d)
{
	int i, j, k, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
	{
		return (NULL);
	}
	if (!d)
	{
		d = " ";
	}
	for (i = 0; str[i] != '\0'; i++)
	s = malloc((1 + numwords) * sizeof(char *));
	for (i = 0, j = 0; j < numwords; j++)
	{
		while (is_delim(str[i], d))
		i++;
		k = 0;
		while (!is_delim(str[i + k], d) && str[i + k])
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

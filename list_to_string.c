#include "shell.h"

/**
 * list_to_strings - converts a list into an array of strings
 * @head: pointer to the head of list
 *
 * Return: converted strings
 */
char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head), j;
	char **strs;
	char *str;

	if (!head || !i)
	{
		return (NULL);
	}
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
	{
		return (NULL);
	}
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
			free(strs[j]);
			free(strs);
			return (NULL);
		}
		str = _strcpy(str, node->str);
		strs[i] = str;
	}
	strs[i] = NULL;
	return (strs);
}

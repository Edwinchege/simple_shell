#include "shell.h"

/**
* add_node_end - adds a new node to the end of a list
* @head: address of pointer to the head of the list
* @str: string to be stored in new node
* @num: int in new node
*
* Return: pointer to the newly added node
*/
list_t *add_node_end(list_t **head, const char *str, int num)
{
	list_t *new_node, *node;

	if (!head)
	{
		return (NULL);
	}
	node = *head;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	_memset((void *)new_node, 0, sizeof(list_t));
	new_node->num = num;
	if (str)
	{
		new_node->str = _strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}

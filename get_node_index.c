#include "shell.h"

/**
* get_node_index - finds the index of a node
* @head: pointer to the head
* @node: pointer to the node
*
* Return: node index, -1 (node not found)
*/
ssize_t get_node_index(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
		{
			return (i);
		}
		head = head->next;
		i++;
	}
	return (-1);
}

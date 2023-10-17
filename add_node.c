#include "shell.h"

/**
* add_node - adds a new node to the start of a list
* @head: address of pointer to the head of the list
* @str: string to be stored in new node
* @num: int in new node
*
* Return: pointer to the newly added node
*/
list_t *add_node(list_t **head, const char *str, int num)
{
	list_t *new_head;

	if (!head)
	{
		return (NULL);
	}
	new_head = malloc(sizeof(list_t));
	_memset((void *)new_head, 0, sizeof(list_t));
	new_head->num = num;
	if (str)
	{
		new_head->str = _strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL);

	char *str_copy = strdup(str);

	if (str_copy == NULL)
	{
		free(new_node);

		return (NULL);
	}
new_node->str = str_copy;

new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
} else
{
	list_t *current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}

#include "shell.h"

/**
 * print_list - printsa all elements of a singly linked list
 * @h: pointer to head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned long count = 0;
	int i;

	while (h != NULL)
	{
		if (h->var == NULL)
			write(STDOUT_FILENO, "[0] (nil)\n", 10);
		else
		{
			for (i = 0; (h->var)[i] != '\0'; i++)
			{}
			write(STDOUT_FILENO, h->var, c);
			write(STDOUT_FILENO, "\n", 1);
		}
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to HEAD of the list
 *
 * Return: number of element in the list
 */

size_t list_len(const list_t *h)
{
	unsigned long count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the first node of the list
 * @str: string to be added in the node
 *
 * Return: address of the new element OR NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp;
	list_t *ptr = *head;

	while (str[len])
		len++;

	temp = malloc(sizeof(temp));
	if (temp == NULL)
		return (temp);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}

	return (temp);
}

/**
 * free_list - frees a linked list
 * @head: pointer to HEAD of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		head = temp->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}

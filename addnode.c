#include "monty.h"

/**
 * addnode - adds a new node to the beginning of the stack
 * @head: pointer to the head of the stack
 * @n: new value to be added
 * Return: no return
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
}


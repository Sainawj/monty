#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *current = *head, *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (current->next)
	{
		current = current->next;
	}

	temp = *head;
	current->next = temp;
	temp->prev = current->prev;
	current->prev->next = NULL;
	current->prev = NULL;
	(*head) = current;
}

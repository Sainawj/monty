#include "monty.h"

/**
 * f_pall - prints all the elements of the stack
 * @head: stack head
 * @counter: line_number (not used)
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	(void)counter;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}


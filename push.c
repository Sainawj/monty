#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n;
	char *arg = bus.arg;

	if (!arg || !isdigit(*arg) && *arg != '-' && *arg != '+')
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

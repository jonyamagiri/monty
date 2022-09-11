#include "monty.h"

/**
* pop - removes the top element of the stack
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void pop(stack_t **stack, unsigned int line_cnt)
{
	stack_t *temp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;

	if (!*stack)
		return;
	(*stack)->prev = NULL;
}

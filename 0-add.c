#include "monty.h"

/**
* adds - adds the top two elements of the stack.
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void adds(stack_t **stack, unsigned int line_cnt)
{
	int sum;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	sum = (*stack)->next->n + (*stack)->n;
	pop(stack, line_cnt);
	(*stack)->n = sum;
}

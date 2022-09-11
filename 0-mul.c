#include "monty.h"

/**
* multiple - multiplies the second top element of the stack
* with the top element of the stack.
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void multiple(stack_t **stack, unsigned int line_cnt)
{
	int multiple;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	multiple = (*stack)->next->n - (*stack)->n;
	pop(stack, line_cnt);
	(*stack)->n = multiple;
}

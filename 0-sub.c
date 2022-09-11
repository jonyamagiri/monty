#include "monty.h"

/**
* difference - subtracts the top element of the stack from the
* second top element of the stack
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void difference(stack_t **stack, unsigned int line_cnt)
{
	int difference;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	difference = (*stack)->next->n - (*stack)->n;
	pop(stack, line_cnt);
	(*stack)->n = difference;
}

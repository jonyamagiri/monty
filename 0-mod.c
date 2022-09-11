#include "monty.h"

/**
* modulus - computes the rest of the division of the second
* top element of the stack by the top element of the stack
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void modulus(stack_t **stack, unsigned int line_cnt)
{
	int modulus;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
		exit(EXIT_FAILURE);
		;
		return;
	}

	modulus = (*stack)->next->n % (*stack)->n;
	pop(stack, line_cnt);
	(*stack)->n = modulus;
}

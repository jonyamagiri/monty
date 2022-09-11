#include "monty.h"

/**
* pint - prints the value at the top of the stack
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void pint(stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

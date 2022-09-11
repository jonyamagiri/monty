#include "monty.h"

/**
* swap - swaps the top two elements of the stack
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void swap(stack_t **stack, unsigned int line_cnt)
{
	stack_t *temp = NULL;
	int temp_elem = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	temp_elem = temp->n;
	temp->n = temp_elem;

	temp->n = temp->next->n;
	temp->next->n = temp_elem;
}

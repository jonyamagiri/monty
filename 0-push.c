#include "monty.h"

/**
* push - pushes an element to the stack
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void push(stack_t **stack, unsigned int line_cnt)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	if (global.data_struct == 1)
	{
		if (!add_dnode(stack, atoi(global.argument)))
			exit(EXIT_FAILURE);
	}
	else
	{
		if (!add_quenode(stack, atoi(global.argument)))
			exit(EXIT_FAILURE);
	}
}

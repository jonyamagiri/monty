#include "monty.h"

/**
* pall - prints all the values on the stack, starting from the top of the stack
* @stack: stack given by main function
* @line_cnt: number of lines
* Return: Nothing
*/

void pall(stack_t **stack, unsigned int line_cnt__attribute__((unused)))
{
	print_stack(*stack);
}

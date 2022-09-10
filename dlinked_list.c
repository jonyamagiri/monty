#include "monty.h"

/**
* add_quenode - adds a node to a stack_t stack in queue_node
* @stack: pointer to stack head
* @n: data to be added to new node
* Return: NULL (if it fails), the address of the new element (otherwise)
*/

stack_t *add_quenode(stack_t **stack, const int n)
{
	stack_t *new_node;
	stack_t *current = *stack;

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (!*stack)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*stack = new_node;
		return (new_node);
	}

	while (current)
	{
		if (!current->next)
		{
			new_node->next = NULL;
			new_node->prev = current;
			current->next = new_node;
			break;
		}
		current = current->next;
	}

	return (new_node);
}

/**
* add_dnode - adds a new node at the beginning of a stack_t stack
* @stack: pointer to first element of stack
* @n: data to be added to new node
* Return: NULL (if it fails), the address of the new element (otherwise)
*/

stack_t *add_dnode(stack_t **stack, const int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;

	return (new_node);
}

/**
* print_stack - prints all the elements of a stack
* @stack: pointer to the first element of stack
* Return: the number of elements in stack
*/

size_t print_stack(const stack_t *stack)
{
	int node_count = 0;

	for (; stack != NULL; node_count++)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
	return (node_count);
}

/**
* free_stack - frees a stack_t stack
* @stack: pointer to first element (head) of stack
* Return: Nothing
*/

void free_stack(stack_t *stack)
{
	stack_t *current = stack;
	stack_t *next;

	if (stack)
	{
		next = stack->next;
		while (current)
		{
			free(current);
			current = next;
			if (next)
				next = next->next;
		}
	}
}
